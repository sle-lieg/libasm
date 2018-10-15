STDIN equ 0
STDOUT equ 1
STDERR equ 2

SYS_WRITE equ 1
SYS_EXIT equ 60

%macro putstr 1
    mov rax, %1
    call _print
%endmacro

%macro exit 0
    mov rax, SYS_EXIT
    mov rdi, 0
    syscall
%endmacro

section .data
    string db "hello world !", 10, 0
    string2 db "what the f.. ?", 10, 0

section .text
    global _start

_start:
    putstr string
    putstr string2

    exit

_print:
    push rax
    mov rdx, 0
_strlen:
    inc rax
    inc rdx
    cmp byte [rax], 0
    jne _strlen
    
    mov rax, SYS_WRITE
    mov rdi, STDOUT
    pop rsi
    syscall
    ret