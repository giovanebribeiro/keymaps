# keymaps

Meus layouts de teclado mecanico (utilizando o firmware QMK). Baseado
[neste](https://github.com/noahfrederick/qmk-keymaps) projeto incrível.

** Layout planck: http://www.keyboard-layout-editor.com/#/gists/007758183ad549d0f8c639c4e0617ce2 **

## Organização

Este projeto está estruturado da seguinte forma:

```
.
|____README.md          # Você está aqui
|____Makefile           # Arquivo para automações de build
|____LICENSE            # Arquivo da licença
|____user               # Pasta com as customizações no layout original (definições de layers, macros, etc)
| |____my.h             # Biblioteca de definições customizada
|____planck             # Layout para o teclado planck
| |____config.h 
| |____keymap.c 
| |____readme.md 
| |____rules.mk
|____qmk_firmware       # Firmware QMK (Adicionado como um submódulo git)

```

## Procedimentos iniciais

Antes de começar tudo, você precisa instalar algumas ferramentas. Depois, basta executar o comando `make setup`:

### Client QMK

O client do QMK não está incluso com este projeto. Você precisa baixá-lo seguindo as instruções deste [link](https://docs.qmk.fm/#/newbs_getting_started).

### ARM GNU Toolchain

Para instalar o toolchain do ARM, basta executar o arquivo `install-arm.sh`. 

Caso ocorra algum erro, deve ser analisado caso a caso. Se faltar alguma dependência, deve ser instalada manualmente. Infelizmente, não há como saber quais dependências estão faltando 
pois depende muito do seu sistema. Como exemplo, temos a instalação da dependência libncurses.so.5:

```
$ sudo apt install libncurses-dev
$ sudo ln -s /usr/lib/x86_64-linux-gnu/libncurses.so.6 /usr/lib/x86_64-linux-gnu/libncurses.so.5
$ sudo ln -s /usr/lib/x86_64-linux-gnu/libtinfo.so.6 /usr/lib/x86_64-linux-gnu/libtinfo.so.5

# Testando tudo:

$ arch64-none-linux-gnu-gcc --version
$ arch64-none-linux-gnu-g++ --version
$ arch64-none-linux-gnu-gdb --version
$ arch64-none-linux-gnu-size --version
```

## Como utilizar

A maioria dos procedimentos foram automatizados por meio de um makefile. Para listar todos os
procedimentos disponíveis, basta executar o comando `make`


