global ft_bzero

ft_bzero:
    ; push rbp
    ; mov rbp, rsp
    mov rcx, rsi
    add rdi, rcx
eraseMemory:
    dec rdi
    mov byte [rdi], 0
    loop eraseMemory

    ; mov rsp, rbp
    ; pop rbp
    ret