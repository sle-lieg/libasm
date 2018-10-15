global _start

_start:
    call func
    mov rax, 1
    mov rbx, 0
    int 0x80

func:
    push rbp
    mov rbp, rsp
    sub rsp, 2
    mov [rsp], byte 'H'
    mov [rsp + 1], byte 'i'
    
    mov rax, 4
    mov rbx, 1
    mov rcx, rsp
    mov rdx, 2
    int 0x80
    mov rsp, rbp
    pop rbp
    ret