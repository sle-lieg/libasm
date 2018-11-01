global _ft_strlen

_ft_strlen:
    xor rax, rax
    mov rcx, -1
    repnz scasb
    not rcx
    dec rcx
    mov rax, rcx
    ret