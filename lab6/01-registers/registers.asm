%include "printf32.asm"

section .data

section .text
    global main
    extern printf

main:
    ;                       EAX
    ;                                 AX
    ;                            AH        AL
    mov eax, 00010000001000001001011010111010b
    mov ecx, 00000010011000000000100110111010b

    cmp al, cl
    jne quit
    PRINTF32 `al and cl are EQUAL!\n\x0`

quit:
    PRINTF32 `eax: %d, ecx: %d\n\x0`, eax, ecx
    PRINTF32 `ax: %hu, cx: %hu\n\x0`, eax, ecx
    PRINTF32 `al: %hhu, cl: %hhu\n\x0`, eax, ecx
    shr eax, 8 ; shift eax to right by 8 bits
    shr ecx, 8 ; shift ecx to right by 8 bits
    PRINTF32 `ah: %hhu, ch: %hhu\n\x0`, eax, ecx

    ret