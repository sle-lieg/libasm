section .text
	global _ft_strlen

_ft_strlen:
	push rbp
	mov rbp, rsp
	; sub rsp, 0x10

	xor rax, rax
	cld
	mov rcx, -1
	repnz scasb
	not rcx
	dec rcx
	mov rax, rcx

	leave
	ret