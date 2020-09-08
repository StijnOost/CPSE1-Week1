	.global Application
	.cpu cortex-m0
	.align 2
	.ascii
	
asciz_word:
	.asciz "Hello world, the ANSWER is 42! @[]`{}~\n"
	
Application:
	PUSH { LR }
	ldr r0, = asciz_word
	bl print_asciz
	POP { PC }

	


	
