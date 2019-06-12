section .text
	global _ft_putchar

%include "sources/macros.mac"

error:
	xor rax, rax
	jmp return

_ft_putchar:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	mov [rbp - 0x8], dil
	lea rsi, [rbp - 0x8]
	print_buffer 1
	jc error
	mov al, BYTE [rbp - 0x8]

return:
	leave
	ret