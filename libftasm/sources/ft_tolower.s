global ft_tolower
extern ft_isupper

ft_tolower:
    call ft_isupper
    test rax, rax
    jz notUpperCase
    xor rdi, 0x20

    notUpperCase:
    mov rax, rdi
    ret