%include "printf32.asm"

section .data
    a DB 100
    b DW 55489
    c DD 3123523
    array DB 72, 101, 108, 108, 111, 0

section .rodata
    constant DD 10

section .bss
    int_zero RESD 1
    char_zero RESB 1

section .text
    global main
    extern printf

main:
    PRINTF32 `value   of a: %hhu\n\x0`, [a]
    PRINTF32 `address of a: %p\n\x0`, a

    PRINTF32 `value   of b: %hhu\n\x0`, [b]
    PRINTF32 `address of b: %p\n\x0`, b

    PRINTF32 `value   of c: %hhu\n\x0`, [c]
    PRINTF32 `address of c: %p\n\n\x0`, c

    PRINTF32 `array: %s\n\n\x0`, array

    PRINTF32 `constant: %d\n\n\x0`, [constant]
    PRINTF32 `int_zero: %d\n\x0`, [int_zero]
    PRINTF32 `char_zero: %hhu\n\x0`, [char_zero]

    ret