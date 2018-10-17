global ft_islower

ft_islower:
    cmp rdi, 'a'
    jl notLower
    cmp rdi, 'z'
    jg notLower
    mov rax, 1
    ret

    notLower:
    mov rax, 0
    ret