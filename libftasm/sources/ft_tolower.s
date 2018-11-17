global _ft_tolower
extern _ft_isupper

_ft_tolower:
	call _ft_isupper
	test rax, rax
	jz notUpperCase
	or rdi, 0x20

	notUpperCase:
	mov rax, rdi
	ret