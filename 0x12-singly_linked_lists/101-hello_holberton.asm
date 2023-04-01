global 	main
	extern 	printf

	section .text
main:
	mov	rdi, format
	mov	rax, 0
	call	printf
	mov	rax, 0
	call    printf
        pop     rbp
	ret

section .data
format:
	db "Hello, Holberton", 10, 0

