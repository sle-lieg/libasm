SYS_WRITE equ 0x2000004
STDOUT equ 1

section .text
	global _ft_puts

_ft_puts:
	push rbp
	mov rbp, rsp
	mov rdx, rdi ; save address of str to print

	; calculate len of string pointed by rdi
	mov rcx, -1
	xor rax, rax
	repnz scasb
	not rcx
	push rcx ; save string length (+1 for the '\n' to add)
	dec rcx
	; print the string
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	mov rsi, rdx
	mov rdx, rcx
	syscall
	; print the \n
	mov rax, SYS_WRITE
	mov rsi, newline
	mov rdx, 1
	syscall

	pop rax
return:
	pop rbp
	ret

section .data
	newline db 10
