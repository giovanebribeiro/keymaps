EXTRAFLAGS += -flto
TMK_COMMON_DEFS += -DLINK_TIME_OPTIMIZATION_ENABLE

COMMAND_ENABLE       = no   # Disable shift combination, which conflicts with shift-parens
CONSOLE_ENABLE       = no
DYNAMIC_MACRO_ENABLE = yes
MIDI_ENABLE          = no
MOUSEKEY_ENABLE      = no
NKRO_ENABLE          = yes

SRC += my.c
