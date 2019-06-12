section .text
	global _ft_isblank

_ft_isblank:
	push rbp
	mov rbp, rsp

	;check if rdi is egual to 0x9(tab) or 0x20(space)
	cmp rdi, 0x9
	je isblank
	cmp rdi, 0x20
	je isblank

	;if not, set rax to 0
	xor rax, rax
	jmp return

isblank:
	mov rax, 0x1

return:
	leave
	ret
