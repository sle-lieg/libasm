%define SRC_ADDR_OFF 0x8
%define SRC_LEN_OFF 0x10

section .text
	global _ft_strdup
	extern _ft_strlen
	extern _ft_memcpy
	extern _malloc

_ft_strdup:
	push rbp
	mov rbp, rsp
	sub rsp, 0x10

	; save addr of src(rdi)
	mov [rbp - SRC_ADDR_OFF], rdi

	; get length of src
	call _ft_strlen

	; increment rax for '\0'
	inc rax

	mov [rbp - SRC_LEN_OFF], rax

	; malloc(rax)
	mov rdi, rax
	call _malloc
	test rax, rax ; test if malloc failed
	jz return

	; memcpy
	mov rdi, rax
	mov rdx, [rbp - SRC_LEN_OFF]
	mov rsi, [rbp - SRC_ADDR_OFF]
	call _ft_memcpy

	; ; add '\0' to the new string
	; lea rdx, [rax]
	; add rdx, [rbp - SRC_LEN_OFF]
	; mov byte [rdx], 0

return:
	leave
	ret

;306 abaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbcc
;320 abaabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcbccbcabcabcabcabc