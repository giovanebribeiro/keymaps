# keymaps

Meus layouts de teclado mecanico (utilizando o firmware QMK). Baseado
[neste](https://github.com/noahfrederick/qmk-keymaps) projeto incrível.

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
