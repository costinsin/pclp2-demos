%include "printf32.asm"

section .data
    char_array DB 72, 101, 108, 108, 111, 0

section .text
    global main
    extern printf

main:
    ; Load the first character intro eax
    mov eax, [char_array]

    ; Print the value loaded in eax
    ; What value will be printed?
    ; What needs to be changed?
    PRINTF32 `eax: %d\n\x0`, eax

    ret