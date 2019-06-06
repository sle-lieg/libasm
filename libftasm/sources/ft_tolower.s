section .text
	global _ft_tolower
	extern _ft_isupper

_ft_tolower:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	call _ft_isupper
	test rax, rax
	jz notUpperCase
	or rdi, 0x20

notUpperCase:
	mov rax, rdi

	leave
	ret