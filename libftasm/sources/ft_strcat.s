global _ft_strcat

_ft_strcat:
	mov rdx, rdi
	mov rcx, -1
	xor rax, rax
	repnz scasb
	dec rdi
copy:
	lodsb
	stosb
	test al, al
	jnz copy

	mov rax, rdx
	ret
