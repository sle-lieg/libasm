global ft_isalpha
extern ft_islower
extern ft_isupper

ft_isalpha:
    call ft_islower
    test rax, rax
    jnz retTrue
    call ft_isupper
    test rax, rax
    jnz retTrue
    mov rax, 0
    ret

    retTrue:
    mov rax, 1
    ret
