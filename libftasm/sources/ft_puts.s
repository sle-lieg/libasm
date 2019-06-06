%define SYS_WRITE	0x2000004
%define STDOUT		1
%define SRC_OFF		0x8
%define LEN_OFF		0x10

section .data
	null_string DB "(null)", 10
	null_len equ $ - null_string
	newline DB 10

section .text
	global _ft_puts
	extern _ft_strlen

_ft_puts:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	; mov rdx, rdi ; save address of str to print
	mov [rbp + SRC_OFF], rdi

	; test if addr not null
	test rdi, rdi ; set ZeroFlag if rdi == 0
	jz null_address

	; calculate len of string pointed by rdi
	call _ft_strlen

	; mov [rbp + LEN_OFF], rax

	; print the string
	mov rdx, rax
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	mov rsi, [rbp + SRC_OFF]
	; mov rdx, [rbp + LEN_OFF]
	syscall

add_newline:
	; print the \n
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	lea rsi, [rel newline]
	mov rdx, 1
	syscall

	; pop rax
	jmp return

null_address:
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	mov rsi, null_string
	mov rdx, null_len
	syscall

return:
	leave
	ret



; %define SYS_WRITE	0x2000004
; %define STDOUT		1

; section .data
; 	null_string DB "(null)", 10
; 	newline DB 10

; section .text
; 	global _ft_puts

; _ft_puts:
; 	push rbp
; 	mov rbp, rsp

; 	mov rdx, rdi ; save address of str to print

; 	; test if addr not null
; 	test rdi, rdi ; set ZeroFlag if rdi == 0
; 	jz null_address

; 	; calculate len of string pointed by rdi
; 	mov rcx, -1
; 	xor rax, rax
; 	repnz scasb
; 	not rcx
; 	push rcx ; save string length (+1 for the '\n' to add)
; 	dec rcx
; 	; print the string
; 	mov rax, SYS_WRITE
; 	mov rdi, STDOUT
; 	mov rsi, rdx
; 	mov rdx, rcx
; 	syscall

; add_newline:
; 	; print the \n
; 	mov rax, SYS_WRITE
; 	; mov rsi, newline
; 	lea rsi, [rel newline]
; 	mov rdx, 1
; 	syscall

; 	pop rax
; 	jmp return

; null_address:
; 	mov rax, SYS_WRITE
; 	mov rdi, STDOUT
; 	mov rsi, null_string
; 	mov rdx, 0x7
; 	syscall

; return:
; 	pop rbp
; 	ret

