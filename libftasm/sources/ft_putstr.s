section .text
	global _ft_putstr
	extern _ft_strlen

%define SYS_WRITE	0x2000004
%define STDOUT		0x1

%include "sources/macros.mac"

_ft_putstr:
	prolog 0

	xor rax, rax
	mov rsi, rdi
putchar:
	cmp [rsi], BYTE 0	; check if \0
	je return

	mov rdi, STDOUT ; move this line on top of putchar ?
	mov rdx, 0x1
	mov rax, SYS_WRITE
	syscall

	inc rsi
	jmp putchar

return:
	epilog