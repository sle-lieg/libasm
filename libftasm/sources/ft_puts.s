SYS_WRITE	equ 0x2000004
STDOUT		equ 1

section .data
	null_string DB "(null)", 10
	newline DB 10

section .text
	global _ft_puts

_ft_puts:
	push rbp
	mov rbp, rsp
	mov rdx, rdi ; save address of str to print

	; test if addr not null
	test rdi, rdi ; set ZeroFlag if rdi 
	jz null_address

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

add_newline:
	; print the \n
	mov rax, SYS_WRITE
	; mov rsi, newline
	lea rsi, [rel newline]
	mov rdx, 1
	syscall

	pop rax
	jmp return

null_address:
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	mov rsi, null_string
	mov rdx, 0x7
	syscall

return:
	pop rbp
	ret

