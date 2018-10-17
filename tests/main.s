	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.intel_syntax noprefix
	.globl	_caller
	.p2align	4, 0x90
_caller:                                ## @caller
	.cfi_startproc
## BB#0:
	push	rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset rbp, -16
	mov	rbp, rsp
Lcfi2:
	.cfi_def_cfa_register rbp
	mov	edi, 1
	mov	esi, 2
	mov	edx, 3
	call	_callee
	add	eax, 5
	pop	rbp
	ret
	.cfi_endproc


.subsections_via_symbols
