section .text
	global _ft_isupper

_ft_isupper:
	push rbp
	mov rbp, rsp

	cmp rdi, 'A'
	jl notUpper
	cmp rdi, 'Z'
	jg notUpper

	mov rax, 1
	jmp return

notUpper:
	xor rax, rax

return:
	pop rbp
	ret