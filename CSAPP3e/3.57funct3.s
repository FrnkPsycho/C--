	.file	"3.57funct3.cpp"
	.text
	.p2align 4
	.globl	_Z6funct3PidlPf
	.type	_Z6funct3PidlPf, @function
_Z6funct3PidlPf:
.LFB9007:
	.cfi_startproc
	endbr64
	vxorps	%xmm1, %xmm1, %xmm1
	vmovapd	%xmm0, %xmm3
	vmovss	(%rdx), %xmm0
	vcvtsi2ssq	%rsi, %xmm1, %xmm2
	vcvtsi2sdl	(%rdi), %xmm1, %xmm1
	vcomisd	%xmm3, %xmm1
	jbe	.L6
	vmulss	%xmm2, %xmm0, %xmm0
	vcvtss2sd	%xmm0, %xmm0, %xmm0
	ret
	.p2align 4,,10
	.p2align 3
.L6:
	vaddss	%xmm0, %xmm0, %xmm0
	vaddss	%xmm2, %xmm0, %xmm0
	vcvtss2sd	%xmm0, %xmm0, %xmm0
	ret
	.cfi_endproc
.LFE9007:
	.size	_Z6funct3PidlPf, .-_Z6funct3PidlPf
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB9008:
	.cfi_startproc
	endbr64
	xorl	%eax, %eax
	ret
	.cfi_endproc
.LFE9008:
	.size	main, .-main
	.p2align 4
	.type	_GLOBAL__sub_I__Z6funct3PidlPf, @function
_GLOBAL__sub_I__Z6funct3PidlPf:
.LFB10262:
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
.LFE10262:
	.size	_GLOBAL__sub_I__Z6funct3PidlPf, .-_GLOBAL__sub_I__Z6funct3PidlPf
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z6funct3PidlPf
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
