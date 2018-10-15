section .data
    digit db "000", 10

section .text
    global _start

_start:
    mov rax, 0x414243
    call _printDigit

    mov rax, 60
    mov rdi, 0
    syscall

_printDigit:
    ; add rax, '0'
    mov [digit], al
    shr rax, 8
    mov [digit + 1], al
    shr rax, 8
    mov [digit + 2], al

    mov rax, 1
    mov rdi, 1
    mov rsi, digit
    mov rdx, 4
    syscall
    ret