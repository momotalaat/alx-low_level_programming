global main
	extern printf

main:
	mov edi, formater
	xor eax, eax
	call printf
	mov eax, 0
	ret
formater: db 'Hello, Holberton',0

