##
# Para exibir uma lista de comandos deste makefile, 
# execute: 
#
# $ make help
#
# Pré-requisitos: o client do qmk deve estar instalado.
# Consulte https://docs.qmk.fm/#/newbs_getting_started 
# para detalhes.
##

USERNAME=my
QMK_DIR=$(PWD)/qmk_firmware
USER_DIR=$(QMK_DIR)/users/$(USERNAME)

KEYBOARD=planck
KEYBOARD_QMK=$(KEYBOARD)/rev6

define MAKEFILE_HELP
## Contém tarefas para automatizar o build dos keymaps dos meus teclados

* setup
	Instala firmware + configurações iniciais

* clean
	Limpa artefatos para uma nova compilação

* install
	Cria os links simbólicos necessários para a compilação do layout

* uninstall
	Remove os links simbólicos necessários para a compilação do layout

* build
	Compila os layouts (no momento, apenas o layout do planck)

* flash
	Atualiza o firmware do teclado (precisa estar em modo de reset para atualização de firmware)

* 
endef
export MAKEFILE_HELP

all: help

setup:
	qmk config user.qmk_home=$(QMK_DIR)
	qmk setup
	sudo cp $(PWD)/qmk_firmware/util/udev/50-qmk.rules /etc/udev/rules.d/


clean:
	cd $(QMK_DIR) && make clean

install:
	ln -s $(PWD)/$(KEYBOARD) $(QMK_DIR)/keyboards/$(KEYBOARD)/keymaps/$(USERNAME)
	ln -s $(PWD)/user $(QMK_DIR)/users/$(USERNAME)
	ln -s $(QMK_DIR)/quantum/keymap_extras/keymap_brazilian_abnt2.h $(QMK_DIR)/users/$(USERNAME)/keymap_br_abnt2.h 

uninstall:
	rm $(QMK_DIR)/keyboards/$(KEYBOARD)/keymaps/$(USERNAME)
	rm $(QMK_DIR)/users/$(USERNAME)
	rm $(PWD)/user/keymap_br_abnt2.h

build: 
	qmk compile -kb $(KEYBOARD_QMK) -km $(USERNAME)

flash: clean build
	qmk flash -kb $(KEYBOARD_QMK) -km $(USERNAME)

help: 
	@echo "$$MAKEFILE_HELP"
