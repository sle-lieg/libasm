%define SYS_READ 0x2000003
%define SYS_WRITE 0x2000004
%define STDOUT 1
%define BUFF_SIZE 50
%define FD_OFF 0x8

section .bss
	buffer resb BUFF_SIZE

section .text
	global _ft_cat

; read fd and output the data
; rdi: file descriptor

_ft_cat:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	; save file descriptor on stack
	mov [rsp + FD_OFF], rdi
	; read

read:
	; get file descriptor from stack
	mov rdi, [rsp + FD_OFF]
	mov rax, SYS_READ
	; mov rsi, buffer
	lea rsi, [rel buffer]
	mov rdx, BUFF_SIZE
	syscall
	jc return
	; test if EOF or error (-1)
	cmp rax, 0x1
	jl return

	;print buffer
	mov rdx, rax
	mov rax, SYS_WRITE
	mov rdi, STDOUT
	lea rsi, [rel buffer]
	; mov rsi, buffer
	syscall
	cmp rax, 0
	jg read

return:
	leave
	ret