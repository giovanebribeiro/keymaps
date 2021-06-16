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

define MAKEFILE_HELP
## Contém tarefas para automatizar o build dos keymaps dos meus teclados

* clean
	Limpa artefatos para uma nova compilação

* prepare
	Prepara o ambiente do QMK para uma instalação limpa.

* install
	Cria os links simbólicos necessários para a compilação do layout

* uninstall
	Remove os links simbólicos necessários para a compilação do layout

* build
	Compila os layouts (no momento, apenas o layout do planck)


* 
endef
export MAKEFILE_HELP

all:
	@echo $(PWD)

clean:
	cd $(QMK_DIR) && make clean

prepare:
	qmk setup -H $(QMK_DIR)

install:
	ln -s $(PWD)/planck $(QMK_DIR)/keyboards/$(KEYBOARD)/keymaps/$(USERNAME)
	ln -s $(PWD)/user $(QMK_DIR)/users/$(USERNAME)

uninstall:
	rm $(QMK_DIR)/keyboards/$(KEYBOARD)/keymaps/$(USERNAME)
	rm $(QMK_DIR)/users/$(USERNAME)

build: 
	qmk compile -kb planck/rev6 -km $(USERNAME)

flash: clean build
	qmk flash -kb planck/rev6 -km $(USERNAME)

help: 
	@echo "$$MAKEFILE_HELP"
