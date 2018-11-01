section .text
	global _ft_bzero

_ft_bzero:
	test rsi, rsi
	jz return
	mov rcx, rsi
	add rdi, rcx
eraseMemory:
	dec rdi
	mov byte [rdi], 0
	loop eraseMemory
return:
	ret
