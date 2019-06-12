%define BUFF_SIZE	0x32
%define FD_OFF		0x8

section .bss
	buffer resb BUFF_SIZE

section .text
	global _ft_cat

%include "sources/macros.mac"

; read fd and output the data
; rdi: file descriptor
_ft_cat:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	; save file descriptor on stack
	mov [rbp - FD_OFF], rdi
read:
	; load addr of buffer to read to
	lea rsi, [rel buffer]
	read_fd [rbp - FD_OFF], BUFF_SIZE
	; test if error occured
	jc error
	; test if EOF (0)
	test rax, rax
	jz return

	;print buffer
	lea rsi, [rel buffer]
	print_buffer rax
	jc error

	cmp rax, 0
	jg read

return:
	leave
	ret

error:
	mov rax, -1
	jmp return