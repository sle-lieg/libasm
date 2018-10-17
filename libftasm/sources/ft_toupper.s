global ft_toupper
extern ft_islower

ft_toupper:
    call ft_islower
    test rax, rax
    jz notLowerCase
    or rdi, 0x20

    notLowerCase:
    mov rax, rdi
    ret
