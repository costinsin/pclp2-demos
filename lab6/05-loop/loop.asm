%include "printf32.asm"

section .data
    char_array DB 72, 101, 108, 108, 111, 0
    int_array DD 2, 4, 5, 8, 3, 9, 1

section .text
    global main
    extern printf

main:
    mov ecx, 5

; Loop and print the char_array
; What is the disadvantage?
loop_chars:
    PRINTF32 `%c\x0`, [char_array + ecx]
    loop loop_chars

    PRINTF32 `%c\n\x0`, [char_array + ecx]


; Loop and sum all the numbers
mov ecx, 7 ; Element count
mov eax, 0 ; Store the sum
loop_sum:
    add eax, dword [int_array + ecx * 4 - 4]
    loop loop_sum

    PRINTF32 `Sum of the elements in the array: %d\n\x0`, eax

    ret