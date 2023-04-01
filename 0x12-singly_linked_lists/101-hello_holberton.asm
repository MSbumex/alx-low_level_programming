global 	main
	extern 	printf

section .text

section .data
format:
        db "Hello, Holberton", 10, 0

main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rax, 0
	ret
