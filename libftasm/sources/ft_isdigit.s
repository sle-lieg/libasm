global ft_isdigit

ft_isdigit:
    cmp rdi, '0'
    jl notDigit
    cmp rdi, '9'
    jg notDigit
    mov rax, 1
    ret

    notDigit:
    mov rax, 0
    ret