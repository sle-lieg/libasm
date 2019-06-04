%define STR_OFF 0x8

section .text
	global _ft_memcpy

_ft_memcpy:
	push rbp
	mov rbp, rsp
	sub rsp, 0x8

	; save addr of dest
	mov [rbp - STR_OFF], rdi

	; mov length to copy in rcx
	mov rcx, rdx

	; cpy rcx bytes from src (rdi), to dest (rsi)
	rep movsb
	mov rax, [rbp - STR_OFF]

	leave
	ret