global ft_isalnum
extern ft_isalpha
extern ft_isdigit


ft_isalnum:
    call ft_isalpha
    test rax, rax
    jnz isAlnum
    call ft_isdigit
    test rax, rax
    jnz isAlnum
    mov rax, 0
    ret

    isAlnum:
    mov rax, 1
    ret