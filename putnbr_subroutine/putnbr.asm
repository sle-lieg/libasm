SYS_EXIT equ 60
SYS_WRITE equ 1
STDOUT equ 1

%macro exit 0
    mov rax, SYS_EXIT
    mov rdi, 0
    syscall
%endmacro

%macro putnbr 1
    mov rax, SYS_WRITE
    mov rdi, STDOUT
    mov rsi, %1
    add byte [rsi], '0'
    mov rdx, 2
    syscall
%endmacro

section .data
    nb db 5, 10

section .text
    global _start

_start:
;     mov rax, 10
;     ; mov rdx, 1
;     mov rbx, 2
;     div rbx
    putnbr 5
    exit