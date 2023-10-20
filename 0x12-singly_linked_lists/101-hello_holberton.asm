global	main
extern	printf
main:
	mov	edi, format
	xor	eax, eax
	call	printf ; Add a newline character to the end of the printf() function call.
	mov	eax, 0
	ret
format: db 'Hello, Holberton',0
