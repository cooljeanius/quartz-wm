/Users/ericgallager/GitHubReposFromOtherComputers/quartz-wm/lib/libquartz-wm-ds.apsl.dylib:
(__TEXT,__text) section
dyld_stub_binding_helper:
0000000000002a10	pushq	%r11
0000000000002a12	leaq	0xffffd5e7(%rip),%r11
0000000000002a19	pushq	%r11
0000000000002a1b	jmp	*0x000015df(%rip)
0000000000002a21	nopl	(%rax)
__dyld_func_lookup:
0000000000002a24	jmp	*0x000015de(%rip)
0000000000002a2a	nop
0000000000002a2b	nop
_qwm_dock_is_window_visible:
0000000000002a2c	pushq	%rbp
0000000000002a2d	movq	%rsp,%rbp
0000000000002a30	pushq	%r15
0000000000002a32	pushq	%r14
0000000000002a34	pushq	%rbx
0000000000002a35	subq	$0x18,%rsp
0000000000002a39	movq	%rsi,%r14
0000000000002a3c	movl	%edi,%r15d
0000000000002a3f	cmpq	$0x00,0x00001639(%rip)
0000000000002a47	je	0x00002a59
0000000000002a49	movl	%r15d,%edi
0000000000002a4c	movq	%r14,%rsi
0000000000002a4f	callq	0x00003720	; symbol stub for: _xp_dock_is_window_visible
0000000000002a54	jmp	0x00002b58
0000000000002a59	callq	0x000036a2	; symbol stub for: __CGSDefaultConnection
0000000000002a5e	movl	%eax,%ebx
0000000000002a60	cmpq	$0x00,0x000015b8(%rip)
0000000000002a68	je	0x00002ad4
0000000000002a6a	leaq	0xe7(%rbp),%rdx
0000000000002a6e	movl	%ebx,%edi
0000000000002a70	movl	%r15d,%esi
0000000000002a73	callq	0x0000366c	; symbol stub for: _CGSWindowIsVisible
0000000000002a78	movl	%eax,%ecx
0000000000002a7a	movzbl	0xe7(%rbp),%eax
0000000000002a7e	movl	%eax,(%r14)
0000000000002a81	cmpl	$0x000003e7,%ecx
0000000000002a87	jg	0x00002a94
0000000000002a89	xorl	%eax,%eax
0000000000002a8b	testl	%ecx,%ecx
0000000000002a8d	jne	0x00002aa4
0000000000002a8f	jmp	0x00002b58
0000000000002a94	cmpl	$0x000003ed,%ecx
0000000000002a9a	jg	0x00002aae
0000000000002a9c	cmpl	$0x000003e8,%ecx
0000000000002aa2	je	0x00002aca
0000000000002aa4	movl	$0x00000002,%eax
0000000000002aa9	jmp	0x00002b58
0000000000002aae	cmpl	$0x000003ee,%ecx
0000000000002ab4	je	0x00002aca
0000000000002ab6	cmpl	$0x000003f2,%ecx
0000000000002abc	je	0x00002b7f
0000000000002ac2	cmpl	$0x000003f3,%ecx
0000000000002ac8	jne	0x00002aa4
0000000000002aca	movl	$0x00000011,%eax
0000000000002acf	jmp	0x00002b58
0000000000002ad4	cmpq	$0x00,0x00001534(%rip)
0000000000002adc	sete	%cl
0000000000002adf	cmpq	$0x00,0x00001531(%rip)
0000000000002ae7	sete	%dl
0000000000002aea	movl	$0x00000002,%eax
0000000000002aef	orb	%cl,%dl
0000000000002af1	jne	0x00002b58
0000000000002af3	leaq	0xdc(%rbp),%rsi
0000000000002af7	movl	%ebx,%edi
0000000000002af9	callq	0x00003666	; symbol stub for: _CGSGetWorkspace
0000000000002afe	movl	%eax,%ecx
0000000000002b00	cmpl	$0x000003e7,%ecx
0000000000002b06	jg	0x00002b3f
0000000000002b08	testl	%ecx,%ecx
0000000000002b0a	jne	0x00002aa4
0000000000002b0c	leaq	0xe0(%rbp),%rdx
0000000000002b10	movl	%ebx,%edi
0000000000002b12	movl	%r15d,%esi
0000000000002b15	callq	0x00003660	; symbol stub for: _CGSGetWindowWorkspace
0000000000002b1a	movl	%eax,%ecx
0000000000002b1c	cmpl	$0x000003e7,%ecx
0000000000002b22	jg	0x00002b3f
0000000000002b24	testl	%ecx,%ecx
0000000000002b26	jne	0x00002aa4
0000000000002b2c	movl	0xdc(%rbp),%eax
0000000000002b2f	cmpl	0xe0(%rbp),%eax
0000000000002b32	sete	%al
0000000000002b35	movzbl	%al,%eax
0000000000002b38	movl	%eax,(%r14)
0000000000002b3b	xorl	%eax,%eax
0000000000002b3d	jmp	0x00002b58
0000000000002b3f	movl	$0x00000011,%eax
0000000000002b44	cmpl	$0x000003ed,%ecx
0000000000002b4a	jg	0x00002b63
0000000000002b4c	cmpl	$0x000003e8,%ecx
0000000000002b52	jne	0x00002aa4
0000000000002b58	addq	$0x18,%rsp
0000000000002b5c	popq	%rbx
0000000000002b5d	popq	%r14
0000000000002b5f	popq	%r15
0000000000002b61	popq	%rbp
0000000000002b62	ret
0000000000002b63	cmpl	$0x000003ee,%ecx
0000000000002b69	je	0x00002b58
0000000000002b6b	cmpl	$0x000003f3,%ecx
0000000000002b71	je	0x00002b58
0000000000002b73	cmpl	$0x000003f2,%ecx
0000000000002b79	jne	0x00002aa4
0000000000002b7f	movl	$0x00000001,%eax
0000000000002b84	jmp	0x00002b58
_qwm_dock_get_orientation:
0000000000002b86	pushq	%rbp
0000000000002b87	movq	%rsp,%rbp
0000000000002b8a	subq	$0x10,%rsp
0000000000002b8e	cmpq	$0x00,0x000014da(%rip)
0000000000002b96	je	0x00002b9f
0000000000002b98	callq	0x00003714	; symbol stub for: _xp_dock_get_orientation
0000000000002b9d	jmp	0x00002baf
0000000000002b9f	leaq	0xfc(%rbp),%rdi
0000000000002ba3	leaq	0xf8(%rbp),%rsi
0000000000002ba7	callq	0x00003672	; symbol stub for: _CoreDockGetOrientationAndPinning
0000000000002bac	movl	0xfc(%rbp),%eax
0000000000002baf	addq	$0x10,%rsp
0000000000002bb3	popq	%rbp
0000000000002bb4	ret
_qwm_dock_minimize_item_with_title_async:
0000000000002bb5	pushq	%rbp
0000000000002bb6	movq	%rsp,%rbp
0000000000002bb9	pushq	%r14
0000000000002bbb	pushq	%rbx
0000000000002bbc	movq	%rsi,%r14
0000000000002bbf	movl	%edi,%ebx
0000000000002bc1	cmpq	$0x00,0x000014bf(%rip)
0000000000002bc9	jne	0x00002c0e
0000000000002bcb	movq	%r14,%rdi
0000000000002bce	callq	0x000036f6	; symbol stub for: _strlen
0000000000002bd3	xorl	%edi,%edi
0000000000002bd5	movq	%r14,%rsi
0000000000002bd8	movq	%rax,%rdx
0000000000002bdb	movl	$0x08000100,%ecx
0000000000002be0	xorl	%r8d,%r8d
0000000000002be3	callq	0x0000363c	; symbol stub for: _CFStringCreateWithBytes
0000000000002be8	movq	%rax,%r14
0000000000002beb	movl	%ebx,%edi
0000000000002bed	movq	%r14,%rsi
0000000000002bf0	callq	0x0000367e	; symbol stub for: _CoreDockMinimizeItemWithTitleAsync
0000000000002bf5	movl	%eax,%ebx
0000000000002bf7	movq	%r14,%rdi
0000000000002bfa	callq	0x0000362a	; symbol stub for: _CFRelease
0000000000002bff	testl	%ebx,%ebx
0000000000002c01	setne	%al
0000000000002c04	movzbl	%al,%eax
0000000000002c07	addl	%eax,%eax
0000000000002c09	popq	%rbx
0000000000002c0a	popq	%r14
0000000000002c0c	popq	%rbp
0000000000002c0d	ret
0000000000002c0e	movl	%ebx,%edi
0000000000002c10	movq	%r14,%rsi
0000000000002c13	popq	%rbx
0000000000002c14	popq	%r14
0000000000002c16	popq	%rbp
0000000000002c17	jmp	0x00003726	; symbol stub for: _xp_dock_minimize_item_with_title_async
_qwm_dock_restore_item_async:
0000000000002c1c	pushq	%rbp
0000000000002c1d	movq	%rsp,%rbp
0000000000002c20	pushq	%r14
0000000000002c22	pushq	%rbx
0000000000002c23	subq	$0x30,%rsp
0000000000002c27	movl	%edi,%ebx
0000000000002c29	cmpq	$0x00,0x00001467(%rip)
0000000000002c31	je	0x00002c3f
0000000000002c33	movl	%ebx,%edi
0000000000002c35	callq	0x00003732	; symbol stub for: _xp_dock_restore_item_async
0000000000002c3a	jmp	0x00002cc1
0000000000002c3f	cmpl	$0x0a,0x0000161a(%rip)
0000000000002c46	jg	0x00002c54
0000000000002c48	movl	%ebx,%edi
0000000000002c4a	callq	0x00003696	; symbol stub for: _CoreDockRestoreItemAsync
0000000000002c4f	movl	%eax,%r14d
0000000000002c52	jmp	0x00002c99
0000000000002c54	movq	0x0000162d(%rip),%rdi
0000000000002c5b	movq	0x000013c6(%rip),%rax
0000000000002c62	movq	%rax,0xc8(%rbp)
0000000000002c66	movl	$0x40000000,0xd0(%rbp)
0000000000002c6d	movl	$0x00000000,0xd4(%rbp)
0000000000002c74	leaq	0x0000004f(%rip),%rax
0000000000002c7b	movq	%rax,0xd8(%rbp)
0000000000002c7f	leaq	0x000015ba(%rip),%rax
0000000000002c86	movq	%rax,0xe0(%rbp)
0000000000002c8a	movl	%ebx,0xe8(%rbp)
0000000000002c8d	leaq	0xc8(%rbp),%rsi
0000000000002c91	callq	0x000036cc	; symbol stub for: _dispatch_async
0000000000002c96	xorl	%r14d,%r14d
0000000000002c99	leaq	0x00000d06(%rip),%rcx
0000000000002ca0	xorl	%edi,%edi
0000000000002ca2	xorl	%esi,%esi
0000000000002ca4	movl	$0x00000007,%edx
0000000000002ca9	movl	%ebx,%r8d
0000000000002cac	movl	%r14d,%r9d
0000000000002caf	xorb	%al,%al
0000000000002cb1	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002cb6	testl	%r14d,%r14d
0000000000002cb9	setne	%al
0000000000002cbc	movzbl	%al,%eax
0000000000002cbf	addl	%eax,%eax
0000000000002cc1	addq	$0x30,%rsp
0000000000002cc5	popq	%rbx
0000000000002cc6	popq	%r14
0000000000002cc8	popq	%rbp
0000000000002cc9	ret
___qwm_dock_restore_item_async_block_invoke_0:
0000000000002cca	pushq	%rbp
0000000000002ccb	movq	%rsp,%rbp
0000000000002cce	pushq	%rbx
0000000000002ccf	subq	$0x28,%rsp
0000000000002cd3	movq	%rdi,%rbx
0000000000002cd6	movl	0x20(%rbx),%edi
0000000000002cd9	callq	0x00003690	; symbol stub for: _CoreDockRestoreItem
0000000000002cde	movq	0x00001343(%rip),%rcx
0000000000002ce5	movq	%rcx,0xd0(%rbp)
0000000000002ce9	movl	$0x40000000,0xd8(%rbp)
0000000000002cf0	movl	$0x00000000,0xdc(%rbp)
0000000000002cf7	movq	0x00001342(%rip),%rdi
0000000000002cfe	leaq	0xd0(%rbp),%rsi
0000000000002d02	leaq	0x00001517(%rip),%rcx
0000000000002d09	leaq	0x0000001d(%rip),%rdx
0000000000002d10	movq	%rdx,0xe0(%rbp)
0000000000002d14	movq	%rcx,0xe8(%rbp)
0000000000002d18	movl	%eax,0xf0(%rbp)
0000000000002d1b	movl	0x20(%rbx),%eax
0000000000002d1e	movl	%eax,0xf4(%rbp)
0000000000002d21	callq	0x000036cc	; symbol stub for: _dispatch_async
0000000000002d26	addq	$0x28,%rsp
0000000000002d2a	popq	%rbx
0000000000002d2b	popq	%rbp
0000000000002d2c	ret
___block_global_0:
0000000000002d2d	pushq	%rbp
0000000000002d2e	movq	%rsp,%rbp
0000000000002d31	movl	0x24(%rdi),%esi
0000000000002d34	cmpl	$0x00,0x20(%rdi)
0000000000002d38	jne	0x00002d49
0000000000002d3a	movl	$0x00000008,%edi
0000000000002d3f	xorl	%edx,%edx
0000000000002d41	xorl	%ecx,%ecx
0000000000002d43	popq	%rbp
0000000000002d44	jmp	_dock_message_handler
0000000000002d49	movl	$0x00000012,%edi
0000000000002d4e	jmp	0x00002d3f
_dock_message_handler:
0000000000002d50	pushq	%rbp
0000000000002d51	movq	%rsp,%rbp
0000000000002d54	pushq	%r15
0000000000002d56	pushq	%r14
0000000000002d58	pushq	%r12
0000000000002d5a	pushq	%rbx
0000000000002d5b	subq	$0x20,%rsp
0000000000002d5f	movq	%rdx,%r15
0000000000002d62	movl	%esi,%ebx
0000000000002d64	movl	%edi,%r14d
0000000000002d67	movq	0x00000c2a(%rip),%rax
0000000000002d6e	movq	%rax,0xd8(%rbp)
0000000000002d72	movq	0x00000c17(%rip),%rax
0000000000002d79	movq	%rax,0xd0(%rbp)
0000000000002d7d	movq	0x00000c04(%rip),%rax
0000000000002d84	movq	%rax,0xc8(%rbp)
0000000000002d88	cmpl	$0x0b,0x000014d1(%rip)
0000000000002d8f	jl	0x00002da8
0000000000002d91	callq	0x000036d2	; symbol stub for: _dispatch_get_current_queue
0000000000002d96	movq	%rax,%rcx
0000000000002d99	xorl	%eax,%eax
0000000000002d9b	cmpq	0x000014e6(%rip),%rcx
0000000000002da2	je	0x000030bf
0000000000002da8	leal	0xff(%r14),%ecx
0000000000002dac	cmpl	$0x17,%ecx
0000000000002daf	ja	0x0000301e
0000000000002db5	leaq	0x00000e4d(%rip),%r9
0000000000002dbc	leaq	0x00000d91(%rip),%r10
0000000000002dc3	leaq	0x00000d6b(%rip),%rax
0000000000002dca	leaq	0x00000ce2(%rip),%r8
0000000000002dd1	leaq	0x000002f4(%rip),%rdx
0000000000002dd8	movslq	(%rdx,%rcx,4),%rcx
0000000000002ddc	addq	%rdx,%rcx
0000000000002ddf	jmp	*%rcx
0000000000002de1	leaq	0x00000c96(%rip),%rcx
0000000000002de8	leaq	0x00000cda(%rip),%r8
0000000000002def	xorl	%edi,%edi
0000000000002df1	xorl	%esi,%esi
0000000000002df3	movl	$0x00000007,%edx
0000000000002df8	movl	%ebx,%r9d
0000000000002dfb	xorb	%al,%al
0000000000002dfd	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002e02	movl	$0x00000001,0xc8(%rbp)
0000000000002e09	jmp	0x0000307b
0000000000002e0e	leaq	0x00000cc9(%rip),%r8
0000000000002e15	jmp	0x00002ec5
0000000000002e1a	leaq	0x00000cdc(%rip),%r8
0000000000002e21	jmp	0x00002ec5
0000000000002e26	leaq	0x00000cf0(%rip),%r8
0000000000002e2d	jmp	0x00002ec5
0000000000002e32	leaq	0x00000d39(%rip),%r8
0000000000002e39	jmp	0x00002ec5
0000000000002e3e	leaq	0x00000c39(%rip),%rcx
0000000000002e45	leaq	0x00000d42(%rip),%r8
0000000000002e4c	xorl	%edi,%edi
0000000000002e4e	xorl	%esi,%esi
0000000000002e50	movl	$0x00000007,%edx
0000000000002e55	movl	%ebx,%r9d
0000000000002e58	xorb	%al,%al
0000000000002e5a	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002e5f	movb	$0x00,0x0000140a(%rip)
0000000000002e66	xorl	%eax,%eax
0000000000002e68	jmp	0x000030bf
0000000000002e6d	leaq	0x00000d32(%rip),%r8
0000000000002e74	jmp	0x00002ec5
0000000000002e76	leaq	0x00000d40(%rip),%r8
0000000000002e7d	jmp	0x00002ec5
0000000000002e7f	leaq	0x00000d51(%rip),%r8
0000000000002e86	jmp	0x00002ec5
0000000000002e88	leaq	0x00000d62(%rip),%r8
0000000000002e8f	jmp	0x00002ec5
0000000000002e91	leaq	0x00000da6(%rip),%r8
0000000000002e98	jmp	0x00002ec5
0000000000002e9a	leaq	0x00000dd7(%rip),%r8
0000000000002ea1	jmp	0x00002ec5
0000000000002ea3	leaq	0x00000e0a(%rip),%r8
0000000000002eaa	jmp	0x00002ec5
0000000000002eac	leaq	0x00000e1b(%rip),%r8
0000000000002eb3	jmp	0x00002ec5
0000000000002eb5	leaq	0x00000e2d(%rip),%r8
0000000000002ebc	jmp	0x00002ec5
0000000000002ebe	leaq	0x00000e3a(%rip),%r8
0000000000002ec5	leaq	0x00000bb2(%rip),%rcx
0000000000002ecc	xorl	%edi,%edi
0000000000002ece	xorl	%esi,%esi
0000000000002ed0	movl	$0x00000007,%edx
0000000000002ed5	movl	%ebx,%r9d
0000000000002ed8	xorb	%al,%al
0000000000002eda	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002edf	jmp	0x0000307b
0000000000002ee4	leaq	0x00000dac(%rip),%r9
0000000000002eeb	leaq	0x00000b8c(%rip),%rcx
0000000000002ef2	xorl	%edi,%edi
0000000000002ef4	xorl	%esi,%esi
0000000000002ef6	movl	$0x00000007,%edx
0000000000002efb	movq	%r9,%r8
0000000000002efe	movl	%ebx,%r9d
0000000000002f01	xorb	%al,%al
0000000000002f03	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002f08	movq	0x08(%r15),%r12
0000000000002f0c	movl	(%r15),%ebx
0000000000002f0f	cmpl	$0x14,%r14d
0000000000002f13	setne	%al
0000000000002f16	movzbl	%al,%eax
0000000000002f19	orl	$0x02,%eax
0000000000002f1c	movl	%eax,0xc8(%rbp)
0000000000002f1f	leal	0x01(%rbx),%eax
0000000000002f22	movslq	%eax,%rdi
0000000000002f25	movl	$0x00000004,%esi
0000000000002f2a	callq	0x000036c6	; symbol stub for: _calloc
0000000000002f2f	movq	%rax,%rcx
0000000000002f32	movl	$0xffffff69,%eax
0000000000002f37	movq	%rcx,0xd0(%rbp)
0000000000002f3b	testq	%rcx,%rcx
0000000000002f3e	je	0x000030bf
0000000000002f44	testl	%ebx,%ebx
0000000000002f46	jle	0x0000307b
0000000000002f4c	decl	%ebx
0000000000002f4e	movslq	%ebx,%rax
0000000000002f51	movl	(%r12,%rax,4),%edx
0000000000002f55	movl	%edx,(%rcx)
0000000000002f57	leal	0xff(%rax),%ebx
0000000000002f5a	addq	$0x04,%rcx
0000000000002f5e	testl	%eax,%eax
0000000000002f60	jne	0x00002f4e
0000000000002f62	jmp	0x0000307b
0000000000002f67	leaq	0x00000cb5(%rip),%rax
0000000000002f6e	leaq	0x00000b09(%rip),%rcx
0000000000002f75	xorl	%edi,%edi
0000000000002f77	xorl	%esi,%esi
0000000000002f79	movl	$0x00000007,%edx
0000000000002f7e	movq	%rax,%r8
0000000000002f81	movl	%ebx,%r9d
0000000000002f84	xorb	%al,%al
0000000000002f86	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002f8b	movl	$0x00000005,0xc8(%rbp)
0000000000002f92	movl	$0x00000002,%edi
0000000000002f97	movl	$0x00000004,%esi
0000000000002f9c	callq	0x000036c6	; symbol stub for: _calloc
0000000000002fa1	movq	%rax,%rcx
0000000000002fa4	movq	%rcx,0xd0(%rbp)
0000000000002fa8	movl	$0xffffff69,%eax
0000000000002fad	testq	%rcx,%rcx
0000000000002fb0	je	0x000030bf
0000000000002fb6	movl	%ebx,(%rcx)
0000000000002fb8	cmpl	$0x07,%r14d
0000000000002fbc	jmp	0x00003013
0000000000002fbe	leaq	0x00000c98(%rip),%r10
0000000000002fc5	leaq	0x00000ab2(%rip),%rcx
0000000000002fcc	xorl	%edi,%edi
0000000000002fce	xorl	%esi,%esi
0000000000002fd0	movl	$0x00000007,%edx
0000000000002fd5	movq	%r10,%r8
0000000000002fd8	movl	%ebx,%r9d
0000000000002fdb	xorb	%al,%al
0000000000002fdd	callq	0x000036ba	; symbol stub for: _asl_log
0000000000002fe2	movl	$0x00000004,0xc8(%rbp)
0000000000002fe9	movl	$0x00000002,%edi
0000000000002fee	movl	$0x00000004,%esi
0000000000002ff3	callq	0x000036c6	; symbol stub for: _calloc
0000000000002ff8	movq	%rax,%rcx
0000000000002ffb	movq	%rcx,0xd0(%rbp)
0000000000002fff	movl	$0xffffff69,%eax
0000000000003004	testq	%rcx,%rcx
0000000000003007	je	0x000030bf
000000000000300d	movl	%ebx,(%rcx)
000000000000300f	cmpl	$0x08,%r14d
0000000000003013	sete	%al
0000000000003016	movzbl	%al,%eax
0000000000003019	movl	%eax,0xd8(%rbp)
000000000000301c	jmp	0x0000307b
000000000000301e	leaq	0x00000a59(%rip),%rcx
0000000000003025	leaq	0x00000ceb(%rip),%r8
000000000000302c	jmp	0x00002ecc
0000000000003031	leaq	0x00000a46(%rip),%rcx
0000000000003038	leaq	0x00000a5b(%rip),%r8
000000000000303f	xorl	%edi,%edi
0000000000003041	xorl	%esi,%esi
0000000000003043	movl	$0x00000007,%edx
0000000000003048	movl	%ebx,%r9d
000000000000304b	xorb	%al,%al
000000000000304d	callq	0x000036ba	; symbol stub for: _asl_log
0000000000003052	movl	$0x00000003,0xc8(%rbp)
0000000000003059	movl	$0x00000002,%edi
000000000000305e	movl	$0x00000004,%esi
0000000000003063	callq	0x000036c6	; symbol stub for: _calloc
0000000000003068	movq	%rax,%rcx
000000000000306b	movq	%rcx,0xd0(%rbp)
000000000000306f	movl	$0xffffff69,%eax
0000000000003074	testq	%rcx,%rcx
0000000000003077	je	0x000030bf
0000000000003079	movl	%ebx,(%rcx)
000000000000307b	cmpl	$0x00,0xc8(%rbp)
000000000000307f	je	0x000030a7
0000000000003081	movq	0x000011e0(%rip),%rax
0000000000003088	testq	%rax,%rax
000000000000308b	je	0x000030a7
000000000000308d	leaq	0xc8(%rbp),%rdi
0000000000003091	call	*%rax
0000000000003093	xorl	%eax,%eax
0000000000003095	movq	0xd0(%rbp),%rdi
0000000000003099	testq	%rdi,%rdi
000000000000309c	je	0x000030bf
000000000000309e	callq	0x000036e4	; symbol stub for: _free
00000000000030a3	xorl	%eax,%eax
00000000000030a5	jmp	0x000030bf
00000000000030a7	movl	$0xfffffffc,%eax
00000000000030ac	movq	0xd0(%rbp),%rdi
00000000000030b0	testq	%rdi,%rdi
00000000000030b3	je	0x000030bf
00000000000030b5	callq	0x000036e4	; symbol stub for: _free
00000000000030ba	movl	$0xfffffffc,%eax
00000000000030bf	addq	$0x20,%rsp
00000000000030c3	popq	%rbx
00000000000030c4	popq	%r12
00000000000030c6	popq	%r14
00000000000030c8	popq	%r15
00000000000030ca	popq	%rbp
00000000000030cb	ret
00000000000030cc	.byte 0x65, 0xff, 0xff #bad opcode
00000000000030cf	.byte 0xff, 0xf9 #bad opcode
00000000000030d1	std
00000000000030d2	.byte 0xff, 0xff #bad opcode
00000000000030d4	adcl	$0x42fffffd,%eax
00000000000030d9	std
00000000000030da	.byte 0xff, 0xff #bad opcode
00000000000030dc	std
00000000000030de	.byte 0xff, 0xff #bad opcode
00000000000030e0	popq	%rdx
00000000000030e1	std
00000000000030e2	.byte 0xff, 0xff #bad opcode
00000000000030e4	movabsb	%al,0x66fffffef9fffffe
00000000000030ed	std
00000000000030ee	.byte 0xff, 0xff #bad opcode
00000000000030f0	jb	0x000030ef
00000000000030f2	.byte 0xff, 0xff #bad opcode
00000000000030f4	movabsl	0xb3fffffdaafffffd,%eax
00000000000030fd	std
00000000000030fe	.byte 0xff, 0xff #bad opcode
0000000000003100	movl	$0x1ffffffd,%esp
0000000000003105	.byte 0xfe, 0xff #bad opcode
0000000000003107	lcalll	*0xc5fffffe(%rbx)
000000000000310d	std
000000000000310e	.byte 0xff, 0xff #bad opcode
0000000000003110	repnz/.byte 0xf2, 0xfe, 0xff #bad opcode
0000000000003113	decl	%esi
0000000000003115	std
0000000000003116	.byte 0xff, 0xff #bad opcode
0000000000003118	sbbb	%bh,%dh
000000000000311a	.byte 0xff, 0xff #bad opcode
000000000000311c	xlat
000000000000311d	std
000000000000311e	.byte 0xff, 0xff #bad opcode
0000000000003120	loopnz	0x0000311f
0000000000003122	.byte 0xff, 0xff #bad opcode
0000000000003124	jmp	0xfffffffff3003126
0000000000003129	std
000000000000312a	.byte 0xff, 0xff #bad opcode
_qwm_dock_remove_item:
000000000000312c	pushq	%rbp
000000000000312d	movq	%rsp,%rbp
0000000000003130	pushq	%r14
0000000000003132	pushq	%rbx
0000000000003133	movl	%edi,%ebx
0000000000003135	cmpq	$0x00,0x00000f53(%rip)
000000000000313d	jne	0x00003176
000000000000313f	movl	%ebx,%edi
0000000000003141	callq	0x0000368a	; symbol stub for: _CoreDockRemoveItem
0000000000003146	movl	%eax,%r14d
0000000000003149	leaq	0x00000856(%rip),%rcx
0000000000003150	xorl	%edi,%edi
0000000000003152	xorl	%esi,%esi
0000000000003154	movl	$0x00000007,%edx
0000000000003159	movl	%ebx,%r8d
000000000000315c	movl	%r14d,%r9d
000000000000315f	xorb	%al,%al
0000000000003161	callq	0x000036ba	; symbol stub for: _asl_log
0000000000003166	testl	%r14d,%r14d
0000000000003169	setne	%al
000000000000316c	movzbl	%al,%eax
000000000000316f	addl	%eax,%eax
0000000000003171	popq	%rbx
0000000000003172	popq	%r14
0000000000003174	popq	%rbp
0000000000003175	ret
0000000000003176	movl	%ebx,%edi
0000000000003178	popq	%rbx
0000000000003179	popq	%r14
000000000000317b	popq	%rbp
000000000000317c	jmp	0x0000372c	; symbol stub for: _xp_dock_remove_item
_qwm_dock_drag_begin:
0000000000003181	pushq	%rbp
0000000000003182	movq	%rsp,%rbp
0000000000003185	movl	%edi,%eax
0000000000003187	cmpq	$0x00,0x00000ec9(%rip)
000000000000318f	jne	0x000031a9
0000000000003191	movl	$0x00000001,%edi
0000000000003196	movl	%eax,%esi
0000000000003198	callq	0x0000369c	; symbol stub for: _CoreDockSendDragWindowMessage
000000000000319d	testl	%eax,%eax
000000000000319f	setne	%al
00000000000031a2	movzbl	%al,%eax
00000000000031a5	addl	%eax,%eax
00000000000031a7	popq	%rbp
00000000000031a8	ret
00000000000031a9	movl	%eax,%edi
00000000000031ab	popq	%rbp
00000000000031ac	jmp	0x00003702	; symbol stub for: _xp_dock_drag_begin
_qwm_dock_drag_end:
00000000000031b1	pushq	%rbp
00000000000031b2	movq	%rsp,%rbp
00000000000031b5	movl	%edi,%eax
00000000000031b7	cmpq	$0x00,0x00000ea1(%rip)
00000000000031bf	jne	0x000031d9
00000000000031c1	movl	$0x00000002,%edi
00000000000031c6	movl	%eax,%esi
00000000000031c8	callq	0x0000369c	; symbol stub for: _CoreDockSendDragWindowMessage
00000000000031cd	testl	%eax,%eax
00000000000031cf	setne	%al
00000000000031d2	movzbl	%al,%eax
00000000000031d5	addl	%eax,%eax
00000000000031d7	popq	%rbp
00000000000031d8	ret
00000000000031d9	movl	%eax,%edi
00000000000031db	popq	%rbp
00000000000031dc	jmp	0x00003708	; symbol stub for: _xp_dock_drag_end
_qwm_dock_event_set_handler:
00000000000031e1	pushq	%rbp
00000000000031e2	movq	%rsp,%rbp
00000000000031e5	cmpq	$0x00,0x00000e7b(%rip)
00000000000031ed	jne	0x000031fd
00000000000031ef	testq	%rdi,%rdi
00000000000031f2	je	0x00003203
00000000000031f4	movq	%rdi,0x0000106d(%rip)
00000000000031fb	popq	%rbp
00000000000031fc	ret
00000000000031fd	popq	%rbp
00000000000031fe	jmp	0x0000370e	; symbol stub for: _xp_dock_event_set_handler
0000000000003203	leaq	0x000007b3(%rip),%rdi
000000000000320a	leaq	0x000007c7(%rip),%rsi
0000000000003211	leaq	0x000007cf(%rip),%rcx
0000000000003218	movl	$0x0000017b,%edx
000000000000321d	callq	0x000036ae	; symbol stub for: ___assert_rtn
_qwm_dock_get_rect:
0000000000003222	pushq	%rbp
0000000000003223	movq	%rsp,%rbp
0000000000003226	pushq	%r15
0000000000003228	pushq	%r14
000000000000322a	pushq	%r12
000000000000322c	pushq	%rbx
000000000000322d	subq	$0x70,%rsp
0000000000003231	cmpq	$0x00,0x00000e3f(%rip)
0000000000003239	je	0x00003245
000000000000323b	callq	0x0000371a	; symbol stub for: _xp_dock_get_rect
0000000000003240	jmp	0x00003400
0000000000003245	movb	0x00001025(%rip),%al
000000000000324b	testb	%al,%al
000000000000324d	jne	0x000033f9
0000000000003253	leaq	0xc0(%rbp),%rdi
0000000000003257	callq	0x00003678	; symbol stub for: _CoreDockGetRect
000000000000325c	leaq	0xb8(%rbp),%rdi
0000000000003260	leaq	0xb4(%rbp),%rsi
0000000000003264	callq	0x00003672	; symbol stub for: _CoreDockGetOrientationAndPinning
0000000000003269	leaq	0xbc(%rbp),%rdx
000000000000326d	xorl	%edi,%edi
000000000000326f	xorl	%esi,%esi
0000000000003271	callq	0x00003648	; symbol stub for: _CGGetActiveDisplayList
0000000000003276	movl	0xbc(%rbp),%r14d
000000000000327a	leaq	0x00000000(,%r14,4),%rdi
0000000000003282	callq	0x000036ea	; symbol stub for: _malloc
0000000000003287	movq	%rax,%r12
000000000000328a	testq	%r12,%r12
000000000000328d	je	0x0000340d
0000000000003293	leaq	0xbc(%rbp),%rdx
0000000000003297	movl	%r14d,%edi
000000000000329a	movq	%r12,%rsi
000000000000329d	callq	0x00003648	; symbol stub for: _CGGetActiveDisplayList
00000000000032a2	cmpl	$0x00,0xbc(%rbp)
00000000000032a6	je	0x000033aa
00000000000032ac	xorl	%ebx,%ebx
00000000000032ae	leaq	0x90(%rbp),%r14
00000000000032b2	leaq	0x00000758(%rip),%r15
00000000000032b9	movl	%ebx,%eax
00000000000032bb	movl	(%r12,%rax,4),%esi
00000000000032bf	movq	%r14,%rdi
00000000000032c2	callq	0x00003642	; symbol stub for: _CGDisplayBounds
00000000000032c7	movsd	0xc0(%rbp),%xmm0
00000000000032cc	movsd	0xc8(%rbp),%xmm1
00000000000032d1	movq	0xa8(%rbp),%rax
00000000000032d5	movq	%rax,0x18(%rsp)
00000000000032da	movq	0xa0(%rbp),%rax
00000000000032de	movq	%rax,0x10(%rsp)
00000000000032e3	movq	0x90(%rbp),%rax
00000000000032e7	movq	0x98(%rbp),%rcx
00000000000032eb	movq	%rcx,0x08(%rsp)
00000000000032f0	movq	%rax,(%rsp)
00000000000032f4	callq	0x0000364e	; symbol stub for: _CGRectContainsPoint
00000000000032f9	cmpb	$0x01,%al
00000000000032fb	jne	0x0000339f
0000000000003301	movl	0xb8(%rbp),%edx
0000000000003304	cmpl	$0x04,%edx
0000000000003307	je	0x0000335a
0000000000003309	cmpl	$0x03,%edx
000000000000330c	je	0x00003344
000000000000330e	cmpl	$0x02,%edx
0000000000003311	jne	0x0000338b
0000000000003313	movsd	0xa0(%rbp),%xmm0
0000000000003318	movsd	%xmm0,0xd0(%rbp)
000000000000331d	movsd	0x90(%rbp),%xmm0
0000000000003322	movsd	%xmm0,0xc0(%rbp)
0000000000003327	cmpl	$0x09,0x00000f32(%rip)
000000000000332e	jg	0x0000339f
0000000000003330	movsd	0xd8(%rbp),%xmm0
0000000000003335	addsd	0x00000643(%rip),%xmm0
000000000000333d	movsd	%xmm0,0xd8(%rbp)
0000000000003342	jmp	0x0000339f
0000000000003344	movsd	0xa8(%rbp),%xmm0
0000000000003349	movsd	%xmm0,0xd8(%rbp)
000000000000334e	movsd	0x98(%rbp),%xmm0
0000000000003353	movsd	%xmm0,0xc8(%rbp)
0000000000003358	jmp	0x0000339f
000000000000335a	movsd	0xa8(%rbp),%xmm0
000000000000335f	movsd	%xmm0,0xd8(%rbp)
0000000000003364	movsd	0x98(%rbp),%xmm0
0000000000003369	movsd	%xmm0,0xc8(%rbp)
000000000000336e	cmpl	$0x09,0x00000eeb(%rip)
0000000000003375	jg	0x0000339f
0000000000003377	movsd	0xd0(%rbp),%xmm0
000000000000337c	addsd	0x000005fc(%rip),%xmm0
0000000000003384	movsd	%xmm0,0xd0(%rbp)
0000000000003389	jmp	0x0000339f
000000000000338b	movq	0x00000ca6(%rip),%rax
0000000000003392	movq	(%rax),%rdi
0000000000003395	movq	%r15,%rsi
0000000000003398	xorb	%al,%al
000000000000339a	callq	0x000036de	; symbol stub for: _fprintf
000000000000339f	incl	%ebx
00000000000033a1	cmpl	0xbc(%rbp),%ebx
00000000000033a4	jb	0x000032b9
00000000000033aa	movsd	0xc0(%rbp),%xmm1
00000000000033af	cvttsd2si	%xmm1,%eax
00000000000033b3	movw	%ax,0x00000ebe(%rip)
00000000000033ba	movsd	0xc8(%rbp),%xmm0
00000000000033bf	cvttsd2si	%xmm0,%eax
00000000000033c3	movw	%ax,0x00000eb0(%rip)
00000000000033ca	addsd	0xd0(%rbp),%xmm1
00000000000033cf	cvttsd2si	%xmm1,%eax
00000000000033d3	movw	%ax,0x00000ea2(%rip)
00000000000033da	addsd	0xd8(%rbp),%xmm0
00000000000033df	cvttsd2si	%xmm0,%eax
00000000000033e3	movw	%ax,0x00000e94(%rip)
00000000000033ea	movb	$0x01,0x00000e7f(%rip)
00000000000033f1	movq	%r12,%rdi
00000000000033f4	callq	0x000036e4	; symbol stub for: _free
00000000000033f9	movq	0x00000e78(%rip),%rax
0000000000003400	addq	$0x70,%rsp
0000000000003404	popq	%rbx
0000000000003405	popq	%r12
0000000000003407	popq	%r14
0000000000003409	popq	%r15
000000000000340b	popq	%rbp
000000000000340c	ret
000000000000340d	leaq	0x000005df(%rip),%rdi
0000000000003414	leaq	0x000005bd(%rip),%rsi
000000000000341b	leaq	0x000005e3(%rip),%rcx
0000000000003422	movl	$0x0000021b,%edx
0000000000003427	callq	0x000036ae	; symbol stub for: ___assert_rtn
_qwm_dock_init:
000000000000342c	pushq	%rbp
000000000000342d	movq	%rsp,%rbp
0000000000003430	pushq	%r15
0000000000003432	pushq	%r14
0000000000003434	pushq	%rbx
0000000000003435	subq	$0x48,%rsp
0000000000003439	movl	%edi,%ebx
000000000000343b	movq	0x00000bee(%rip),%rax
0000000000003442	movq	(%rax),%rax
0000000000003445	movq	%rax,0xe0(%rbp)
0000000000003449	movq	$0x00000020,0xa8(%rbp)
0000000000003451	cmpq	$0x00,0x00000c0f(%rip)
0000000000003459	je	0x00003474
000000000000345b	testb	%bl,%bl
000000000000345d	sete	%al
0000000000003460	movzbl	%al,%eax
0000000000003463	leal	0x00000001(,%rax,4),%edi
000000000000346a	callq	0x00003738	; symbol stub for: _xp_init
000000000000346f	jmp	0x000035af
0000000000003474	leaq	0x000005cc(%rip),%rdi
000000000000347b	leaq	0xc0(%rbp),%r14
000000000000347f	leaq	0xa8(%rbp),%rdx
0000000000003483	movq	%r14,%rsi
0000000000003486	xorl	%ecx,%ecx
0000000000003488	xorl	%r8d,%r8d
000000000000348b	callq	0x000036fc	; symbol stub for: _sysctlbyname
0000000000003490	cmpl	$0xff,%eax
0000000000003493	jne	0x000034ab
0000000000003495	leaq	0x000005ba(%rip),%rdi
000000000000349c	callq	0x000036f0	; symbol stub for: _perror
00000000000034a1	movl	$0x0000000a,%eax
00000000000034a6	jmp	0x000034c3
00000000000034a8	incq	%r14
00000000000034ab	movb	(%r14),%al
00000000000034ae	testb	%al,%al
00000000000034b0	je	0x000034b6
00000000000034b2	cmpb	$0x2e,%al
00000000000034b4	jne	0x000034a8
00000000000034b6	movb	$0x00,(%r14)
00000000000034ba	leaq	0xc0(%rbp),%rdi
00000000000034be	callq	0x000036c0	; symbol stub for: _atoi
00000000000034c3	movl	%eax,0x00000d97(%rip)
00000000000034c9	callq	0x000036a2	; symbol stub for: __CGSDefaultConnection
00000000000034ce	leaq	0xb4(%rbp),%rsi
00000000000034d2	movl	%eax,%edi
00000000000034d4	callq	0x00003654	; symbol stub for: _CGSGetEventPort
00000000000034d9	testl	%eax,%eax
00000000000034db	jne	0x0000354a
00000000000034dd	movl	0xb4(%rbp),%esi
00000000000034e0	movq	0x00000b61(%rip),%rax
00000000000034e7	movq	(%rax),%r14
00000000000034ea	leaq	0x000000de(%rip),%rdx
00000000000034f1	movq	%r14,%rdi
00000000000034f4	xorl	%ecx,%ecx
00000000000034f6	xorl	%r8d,%r8d
00000000000034f9	callq	0x00003624	; symbol stub for: _CFMachPortCreateWithPort
00000000000034fe	movq	%rax,%r15
0000000000003501	testq	%r15,%r15
0000000000003504	je	0x0000354a
0000000000003506	movq	%r14,%rdi
0000000000003509	movq	%r15,%rsi
000000000000350c	xorl	%edx,%edx
000000000000350e	callq	0x0000361e	; symbol stub for: _CFMachPortCreateRunLoopSource
0000000000003513	movq	%rax,0x00000d66(%rip)
000000000000351a	movq	%r15,%rdi
000000000000351d	callq	0x0000362a	; symbol stub for: _CFRelease
0000000000003522	cmpq	$0x00,0x00000d56(%rip)
000000000000352a	je	0x0000354a
000000000000352c	callq	0x00003636	; symbol stub for: _CFRunLoopGetCurrent
0000000000003531	movq	0x00000b18(%rip),%rcx
0000000000003538	movq	(%rcx),%rdx
000000000000353b	movq	0x00000d3e(%rip),%rsi
0000000000003542	movq	%rax,%rdi
0000000000003545	callq	0x00003630	; symbol stub for: _CFRunLoopAddSource
000000000000354a	testb	%bl,%bl
000000000000354c	jne	0x000035af
000000000000354e	cmpl	$0x0b,0x00000d0b(%rip)
0000000000003555	jl	0x00003567
0000000000003557	xorl	%edi,%edi
0000000000003559	xorl	%esi,%esi
000000000000355b	callq	0x000036d8	; symbol stub for: _dispatch_queue_create
0000000000003560	movq	%rax,0x00000d21(%rip)
0000000000003567	leaq	0xb8(%rbp),%rsi
000000000000356b	xorl	%edi,%edi
000000000000356d	callq	0x000036a8	; symbol stub for: __RegisterApplication
0000000000003572	callq	0x00003636	; symbol stub for: _CFRunLoopGetCurrent
0000000000003577	leaq	0xfffff7d2(%rip),%rdi
000000000000357e	xorl	%esi,%esi
0000000000003580	movq	%rax,%rdx
0000000000003583	callq	0x00003684	; symbol stub for: _CoreDockRegisterClientWithRunLoop
0000000000003588	testw	%ax,%ax
000000000000358b	je	0x000035a8
000000000000358d	movswl	%ax,%edx
0000000000003590	movq	0x00000aa1(%rip),%rax
0000000000003597	movq	(%rax),%rdi
000000000000359a	leaq	0x000004bc(%rip),%rsi
00000000000035a1	xorb	%al,%al
00000000000035a3	callq	0x000036de	; symbol stub for: _fprintf
00000000000035a8	movb	$0x00,0x00000cc1(%rip)
00000000000035af	movq	0x00000a7a(%rip),%rax
00000000000035b6	movq	(%rax),%rax
00000000000035b9	cmpq	0xe0(%rbp),%rax
00000000000035bd	jne	0x000035ca
00000000000035bf	addq	$0x48,%rsp
00000000000035c3	popq	%rbx
00000000000035c4	popq	%r14
00000000000035c6	popq	%r15
00000000000035c8	popq	%rbp
00000000000035c9	ret
00000000000035ca	callq	0x000036b4	; symbol stub for: ___stack_chk_fail
_cg_input_callback:
00000000000035cf	pushq	%rbp
00000000000035d0	movq	%rsp,%rbp
00000000000035d3	pushq	%r15
00000000000035d5	pushq	%r14
00000000000035d7	pushq	%rbx
00000000000035d8	subq	$0x000000f8,%rsp
00000000000035df	movq	%rsi,%r14
00000000000035e2	callq	0x000036a2	; symbol stub for: __CGSDefaultConnection
00000000000035e7	movl	%eax,%ebx
00000000000035e9	leaq	0xfffffef8(%rbp),%r15
00000000000035f0	movl	%ebx,%edi
00000000000035f2	movq	%r14,%rsi
00000000000035f5	movq	%r15,%rdx
00000000000035f8	movl	$0x000000f0,%ecx
00000000000035fd	callq	0x0000365a	; symbol stub for: _CGSGetNextEventRecordFromMessage
0000000000003602	testl	%eax,%eax
0000000000003604	jne	0x0000360f
0000000000003606	cmpl	$0x00,0xffffff00(%rbp)
000000000000360d	jne	0x000035f0
000000000000360f	addq	$0x000000f8,%rsp
0000000000003616	popq	%rbx
0000000000003617	popq	%r14
0000000000003619	popq	%r15
000000000000361b	popq	%rbp
000000000000361c	ret
