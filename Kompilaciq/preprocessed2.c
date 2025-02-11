.file	"compilation2.c"
.text
.globl	lcm
.def	lcm;	.scl	2;	.type	32;	.endef
.seh_proc	lcm
lcm:
pushq	%rbp
.seh_pushreg	%rbp
movq	%rsp, %rbp
.seh_setframe	%rbp, 0
subq	$16, %rsp
.seh_stackalloc	16
.seh_endprologue
movl	%ecx, 16(%rbp)
movl	%edx, 24(%rbp)
movl	$0, -4(%rbp)
movl	16(%rbp), %eax
cmpl	24(%rbp), %eax
jle	.L2
movl	16(%rbp), %eax
movl	%eax, -4(%rbp)
jmp	.L6
.L2:
movl	24(%rbp), %eax
movl	%eax, -4(%rbp)
.L6:
movl	-4(%rbp), %eax
cltd
idivl	16(%rbp)
movl	%edx, %eax
testl	%eax, %eax
jne	.L4
movl	-4(%rbp), %eax
cltd
idivl	24(%rbp)
movl	%edx, %eax
testl	%eax, %eax
jne	.L4
movl	-4(%rbp), %eax
jmp	.L7
.L4:
addl	$1, -4(%rbp)
jmp	.L6
.L7:
addq	$16, %rsp
popq	%rbp
ret
.seh_endproc
.def	__main;	.scl	2;	.type	32;	.endef
.section .rdata,"dr"
.LC0:
.ascii "%d\0"
.text
.globl	main
.def	main;	.scl	2;	.type	32;	.endef
.seh_proc	main
main:
pushq	%rbp
.seh_pushreg	%rbp
movq	%rsp, %rbp
.seh_setframe	%rbp, 0
subq	$48, %rsp
.seh_stackalloc	48
.seh_endprologue
call	__main
movl	$12, -4(%rbp)
movl	$18, -8(%rbp)
movl	-8(%rbp), %edx
movl	-4(%rbp), %eax
movl	%eax, %ecx
call	lcm
movl	%eax, %edx
leaq	.LC0(%rip), %rax
movq	%rax, %rcx
call	printf
movl	$0, %eax
addq	$48, %rsp
popq	%rbp
ret
.seh_endproc
.ident	"GCC: (Rev3, Built by MSYS2 project) 13.2.0"
.def	printf;	.scl	2;	.type	32;	.endef