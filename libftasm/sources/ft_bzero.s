section .text
	global _ft_bzero

_ft_bzero:
	push rbp
	mov rbp, rsp

	test rsi, rsi
	jz end
	mov rcx, rsi
	add rdi, rcx

eraseMemory:
	dec rdi
	mov byte [rdi], 0
	loop eraseMemory

end:
	pop rbp
	ret
