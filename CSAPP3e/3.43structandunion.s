	.file	"3.43structandunion.cpp"
	.text
	.p2align 4
	.globl	_Z3getP6u_typePc
	.type	_Z3getP6u_typePc, @function
_Z3getP6u_typePc:
.LFB8476:
	.cfi_startproc
	endbr64
	movq	8(%rdi), %rax
	movzbl	(%rax), %eax
	movb	%al, (%rsi)
	ret
	.cfi_endproc
.LFE8476:
	.size	_Z3getP6u_typePc, .-_Z3getP6u_typePc
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
	.type	_GLOBAL__sub_I__Z3getP6u_typePc, @function
_GLOBAL__sub_I__Z3getP6u_typePc:
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
	.size	_GLOBAL__sub_I__Z3getP6u_typePc, .-_GLOBAL__sub_I__Z3getP6u_typePc
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z3getP6u_typePc
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
