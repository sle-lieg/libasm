section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _malloc

_ft_strdup:
	push rbp
	mov rbp, rsp
	; save addr of src(rdi)
	push rdi
	; get length of src
	call _ft_strlen
	push rax

	; malloc(rax)
	mov rdi, rax
	call _malloc
	test rax, rax ; test if malloc failed
	jz return

	; memcpy
	mov rdi, rax
	pop rdx
	pop rsi
	call _ft_memcpy
return:
	leave
	ret