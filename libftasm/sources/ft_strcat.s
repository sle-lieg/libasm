global ft_strcat

ft_strcat:
    mov rdx, rdi
    xor rax, rax
    repnz scasb     ; SCAnStringByte: compare byte at rdi with value in rax, inc rdi, dec rcx.
                    ; REPeatwhileNotequalZero: repeat the instruciton while zero flag not set
    dec rdi
copy:
    lodsb
    stosb
    test al, al
    jnz copy

    mov rax, rdx
    ret
