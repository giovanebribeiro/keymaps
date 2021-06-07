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

uninstall:
	rm $(QMK_DIR)/keyboards/$(KEYBOARD)/keymaps/$(USERNAME)

build: 
	qmk compile -kb planck/rev6 -km $(USERNAME)

help: 
	@echo "$$MAKEFILE_HELP"
