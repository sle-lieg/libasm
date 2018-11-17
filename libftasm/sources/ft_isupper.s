global _ft_isupper

_ft_isupper:
    cmp rdi, 0x41
    jl notUpper
    cmp rdi, 0x5A
    jg notUpper
    mov rax, 1
    ret

    notUpper:
    mov rax, 0
    ret