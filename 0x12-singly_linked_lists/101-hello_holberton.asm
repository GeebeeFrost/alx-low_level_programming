	global main
	extern printf
main:
	mov edi, fmt
	xor eax, eax
	mov eax, 0
	call printf
	ret

fmt:	db `Hello, Holberton\n`, 0
