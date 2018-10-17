global ft_isupper

ft_isupper:
    cmp rdi, 'A'
    jl notUpper
    cmp rdi, 'Z'
    jg notUpper
    mov rax, 1
    ret

    notUpper:
    mov rax, 0
    ret