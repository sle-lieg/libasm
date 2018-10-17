global ft_isprint

ft_isprint:
    cmp rdi, 0x20
    jl notPrintable
    cmp rdi, 0x7e
    jl notPrintable
    mov rax, 1
    ret

    notPrintable:
    mov rax, 0
    ret