%define STR_OFF 0x8

section .text
	global _ft_memset

_ft_memset:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	; save rdi: src addr
	mov [rbp - STR_OFF], rdi
	; mov src len in rcx
	mov rcx, rdx
	; mov 2nd param (char to set) in rax
	mov rax, rsi
	; cld
	; stosb -> store byte in AL to rdi, then inc rdi
	; rep -> dec rcx, repeat instruction if rcx != 0
	rep stosb

	mov rax, [rbp - STR_OFF]

	leave
	ret