section .text
	global _ft_islower

_ft_islower:
	push rbp
	mov rbp, rsp

	cmp rdi, 'a'
	jl notLower
	cmp rdi, 'z'
	jg notLower

	mov rax, 1
	jmp return

notLower:
	mov rax, 0

return:
	leave
	ret