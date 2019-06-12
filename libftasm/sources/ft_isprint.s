section .text
	global _ft_isprint

_ft_isprint:
	push rbp
	mov rbp, rsp

	cmp rdi, 0x20
	jl notPrintable
	cmp rdi, 0x7e
	jg notPrintable
	mov rax, 1
	jmp return

notPrintable:
	xor rax, rax

return:
	pop rbp
	ret