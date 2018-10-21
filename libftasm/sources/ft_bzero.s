global ft_bzero

ft_bzero:
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
