section .text
	global _ft_isascii

_ft_isascii:
	push rbp
	mov rbp, rsp

	cmp rdi, 0
	jl notAscii
	cmp rdi, 127
	jg notAscii
	mov rax, 1
	jmp return

notAscii:
	xor rax, rax

return:
	pop rbp
	ret