global ft_strdup
extern ft_strlen
extern ft_memcpy
extern malloc

ft_strdup:
	push rdi
	; get length of rdi
	call ft_strlen
	mov rbx, rax
	; malloc byte * length
	mov rdi, rax
	call malloc

	; memcpy
	mov rdi, rax
	pop rsi
	mov rdx, rbx
	call ft_memcpy

	ret