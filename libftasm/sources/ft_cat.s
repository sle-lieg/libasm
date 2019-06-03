SYS_READ	equ 0x2000003
SYS_WRITE	equ 0x2000004
STDOUT		equ 1
BUFF_SIZE	equ 50

; TEST with buffer from .data rather than .bss

; section .data
; 	buffer resb 50

section .bss
	buffer resb BUFF_SIZE

section .text
	global _ft_cat

; read fd and output the data

_ft_cat: ; rdi: file descriptor
	push rbp
	mov rbp, rsp

	; cmp edi, 0
	; jl return
	sub rsp, 0x10
	; save file descriptor on stack
	mov [rsp + 4], rdi
	; read
	read:
	; get file descriptor from stack
	mov rdi, [rsp + 4]
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