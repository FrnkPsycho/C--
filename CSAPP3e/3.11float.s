	.file	"3.11float.cpp"
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB10240:
	.cfi_startproc
	cmpl	$1, %edi
	je	.L7
.L4:
	ret
.L7:
	cmpl	$65535, %esi
	jne	.L4
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	call	__cxa_atexit@PLT
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE10240:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.globl	_Z4addfdd
	.type	_Z4addfdd, @function
_Z4addfdd:
.LFB9007:
	.cfi_startproc
	endbr64
	vaddsd	%xmm1, %xmm0, %xmm0
	ret
	.cfi_endproc
.LFE9007:
	.size	_Z4addfdd, .-_Z4addfdd
	.globl	_Z4convf
	.type	_Z4convf, @function
_Z4convf:
.LFB9008:
	.cfi_startproc
	endbr64
	vcvtss2sd	%xmm0, %xmm0, %xmm0
	ret
	.cfi_endproc
.LFE9008:
	.size	_Z4convf, .-_Z4convf
	.globl	main
	.type	main, @function
main:
.LFB9009:
	.cfi_startproc
	endbr64
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE9009:
	.size	main, .-main
	.type	_GLOBAL__sub_I__Z4addfdd, @function
_GLOBAL__sub_I__Z4addfdd:
.LFB10263:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE10263:
	.size	_GLOBAL__sub_I__Z4addfdd, .-_GLOBAL__sub_I__Z4addfdd
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z4addfdd
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
