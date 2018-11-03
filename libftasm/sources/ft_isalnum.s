global _ft_isalnum
extern _ft_isalpha
extern _ft_isdigit


_ft_isalnum:
    call _ft_isalpha
    test rax, rax
    jnz isAlnum
    call _ft_isdigit
    test rax, rax
    jnz isAlnum
    mov rax, 0
    ret

    isAlnum:
    mov rax, 1
    ret