global _ft_isalpha
extern _ft_islower
extern _ft_isupper

_ft_isalpha:
    call _ft_islower
    test rax, rax
    jnz retTrue
    call _ft_isupper
    test rax, rax
    jnz retTrue
    mov rax, 0
    ret

    retTrue:
    mov rax, 1
    ret
