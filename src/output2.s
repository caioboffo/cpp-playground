	.file	"work_with_files_normal.cpp"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"file.txt"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB1290:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1290
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$544, %rsp
	.cfi_def_cfa_offset 576
	leaq	16(%rsp), %rdi
.LEHB0:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1Ev
.LEHE0:
	leaq	16(%rsp), %rdi
	movl	$8, %edx
	movl	$.LC0, %esi
	movq	$_ZNSs4_Rep20_S_empty_rep_storageE+24, (%rsp)
.LEHB1:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode
	.p2align 4,,10
	.p2align 3
.L7:
	movq	16(%rsp), %rax
	movq	-24(%rax), %rax
	movq	256(%rsp,%rax), %rbx
	testq	%rbx, %rbx
	je	.L21
	cmpb	$0, 56(%rbx)
	je	.L8
	movzbl	67(%rbx), %eax
.L9:
	leaq	16(%rsp), %rdi
	movsbl	%al, %edx
	movq	%rsp, %rsi
	call	_ZSt7getlineIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RSbIS4_S5_T1_ES4_
.LEHE1:
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	testb	$5, 32(%rax,%rdx)
	je	.L22
	movq	%rsp, %rdi
	call	_ZNSsD1Ev
	leaq	16(%rsp), %rdi
.LEHB2:
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
.LEHE2:
	addq	$544, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L22:
	.cfi_restore_state
	movq	(%rsp), %rsi
	movl	$_ZSt4cout, %edi
	movq	-24(%rsi), %rdx
.LEHB3:
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l
	movq	%rax, %rbp
	movq	(%rax), %rax
	movq	-24(%rax), %rax
	movq	240(%rbp,%rax), %rbx
	testq	%rbx, %rbx
	je	.L23
	cmpb	$0, 56(%rbx)
	je	.L5
	movzbl	67(%rbx), %eax
.L6:
	movsbl	%al, %esi
	movq	%rbp, %rdi
	call	_ZNSo3putEc
	movq	%rax, %rdi
	call	_ZNSo5flushEv
	jmp	.L7
	.p2align 4,,10
	.p2align 3
.L8:
	movq	%rbx, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	(%rbx), %rax
	movl	$10, %esi
	movq	%rbx, %rdi
	call	*48(%rax)
	jmp	.L9
	.p2align 4,,10
	.p2align 3
.L5:
	movq	%rbx, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	movq	(%rbx), %rax
	movl	$10, %esi
	movq	%rbx, %rdi
	call	*48(%rax)
	jmp	.L6
.L21:
	call	_ZSt16__throw_bad_castv
.LEHE3:
.L14:
	movq	%rsp, %rdi
	movq	%rax, %rbx
	call	_ZNSsD1Ev
	leaq	16(%rsp), %rdi
	call	_ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev
	movq	%rbx, %rdi
.LEHB4:
	call	_Unwind_Resume
.LEHE4:
.L23:
.LEHB5:
	call	_ZSt16__throw_bad_castv
.LEHE5:
	.cfi_endproc
.LFE1290:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1290:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1290-.LLSDACSB1290
.LLSDACSB1290:
	.uleb128 .LEHB0-.LFB1290
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1290
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L14-.LFB1290
	.uleb128 0
	.uleb128 .LEHB2-.LFB1290
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1290
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L14-.LFB1290
	.uleb128 0
	.uleb128 .LEHB4-.LFB1290
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB1290
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L14-.LFB1290
	.uleb128 0
.LLSDACSE1290:
	.section	.text.startup
	.size	main, .-main
	.p2align 4,,15
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1483:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	__cxa_atexit
	.cfi_endproc
.LFE1483:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Debian 4.7.2-5) 4.7.2"
	.section	.note.GNU-stack,"",@progbits
