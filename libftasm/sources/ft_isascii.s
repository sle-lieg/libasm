global _ft_isascii

_ft_isascii:
    cmp rdi, 0
    jl notAscii
    cmp rdi, 127
    jg notAscii
    mov rax, 1
    ret

    notAscii:
    mov rax, 0
    ret