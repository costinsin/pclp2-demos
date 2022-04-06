%include "printf32.asm"

section .data
    char_array DB 72, 101, 108, 108, 111, 0
    int_array DD 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

section .text
    global main
    extern printf

main:
    mov ecx, 0

; Loop and print the characters in char_array
loop_chars:
    PRINTF32 `%c\x0`, [char_array + ecx]
    inc ecx
    cmp ecx, 5
    jl loop_chars
    
    PRINTF32 `\n\x0`



    mov ecx, 0

; Loop and print only the even numbers in int_array
; What needs to be changed in order to print the odd numbers?
loop_even:
    PRINTF32 `%d \x0`, [int_array + ecx * 4 * 2]
    inc ecx
    cmp ecx, 5
    jl loop_even

    PRINTF32 `\n\x0`

    ret