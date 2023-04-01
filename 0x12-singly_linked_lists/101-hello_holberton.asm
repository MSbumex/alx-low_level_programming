section .text
global main

section .data
msg:		db "Hello, Holberton", 0
fmt:		db "%s", 10, 0
msglen: 	equ $ - msg

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, msglen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
