section .text
	global _ft_isdigit

_ft_isdigit:
	push rbp
	mov rbp, rsp

	cmp rdi, '0'
	jl notDigit
	cmp rdi, '9'
	jg notDigit

	mov rax, 1
	jmp return

notDigit:
	xor rax, rax

return:
	pop rbp
	ret