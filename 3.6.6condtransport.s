	.file	"3.6.6condtransport.cpp"
	.text
	.p2align 4
	.globl	_Z7absdiffll
	.def	_Z7absdiffll;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z7absdiffll
_Z7absdiffll:
.LFB0:
	.seh_endprologue
	movl	%edx, %r8d
	movl	%ecx, %eax
	subl	%ecx, %r8d
	subl	%edx, %eax
	cmpl	%edx, %ecx
	cmovl	%r8d, %eax
	ret
	.seh_endproc
	.ident	"GCC: (Rev5, Built by MSYS2 project) 10.3.0"
