	.file	"3.10.5vframe.cpp"
	.text
	.p2align 4
	.globl	_Z6vframellPl
	.type	_Z6vframellPl, @function
_Z6vframellPl:
.LFB8476:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	15(,%rdi,8), %rax
	movq	%rsp, %r9
	movq	%rax, %rcx
	andq	$-4096, %rax
	subq	%rax, %r9
	andq	$-16, %rcx
	movq	%r9, %rax
	cmpq	%rax, %rsp
	je	.L3
.L14:
	subq	$4096, %rsp
	orq	$0, 4088(%rsp)
	cmpq	%rax, %rsp
	jne	.L14
.L3:
	andl	$4095, %ecx
	subq	%rcx, %rsp
	testq	%rcx, %rcx
	jne	.L15
.L4:
	leaq	7(%rsp), %rcx
	leaq	-16(%rbp), %r8
	movq	$1, -16(%rbp)
	movq	%rcx, %rax
	andq	$-8, %rcx
	shrq	$3, %rax
	movq	%r8, 0(,%rax,8)
	cmpq	$1, %rdi
	jle	.L5
	movl	$1, %eax
	.p2align 4,,10
	.p2align 3
.L6:
	movq	%rdx, (%rcx,%rax,8)
	addq	$1, %rax
	cmpq	%rdi, %rax
	jne	.L6
	movq	%rax, -16(%rbp)
.L5:
	movq	(%rcx,%rsi,8), %rax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	movq	(%rax), %rax
	jne	.L16
	leave
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
	.p2align 4,,10
	.p2align 3
.L15:
	.cfi_restore_state
	orq	$0, -8(%rsp,%rcx)
	jmp	.L4
.L16:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE8476:
	.size	_Z6vframellPl, .-_Z6vframellPl
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB8477:
	.cfi_startproc
	endbr64
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE8477:
	.size	main, .-main
	.p2align 4
	.type	_GLOBAL__sub_I__Z6vframellPl, @function
_GLOBAL__sub_I__Z6vframellPl:
.LFB9731:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE9731:
	.size	_GLOBAL__sub_I__Z6vframellPl, .-_GLOBAL__sub_I__Z6vframellPl
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z6vframellPl
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
