	extern	printf

	SECTION .data
fmt: db "Hello, Holberton", 10, 0
	SECTION .text
	global	main
main:
	mov	edi, fmt
	xor	eax, eax
	call	printf
	mov	eax, 0
	ret
