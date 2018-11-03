global _ft_toupper
extern _ft_islower

_ft_toupper:
    call _ft_islower
    test rax, rax
    jz notLowerCase
    or rdi, 0x20

    notLowerCase:
    mov rax, rdi
    ret
