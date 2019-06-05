section .text
	global _ft_isspace

notspace:
	mov rax, 0
	jmp return

isspace:
	mov rax, 1
	jmp return

_ft_isspace:
	push rbp
	mov rbp, rsp

	;check if 0x9 <= rdi <= 0xD || rdi == 0x20
	cmp edi, 0x9
	jl notspace
	cmp edi, 0xE
	jl isspace
	cmp edi, 0x20
	je isspace

	jmp notspace

return:
	leave
	ret
