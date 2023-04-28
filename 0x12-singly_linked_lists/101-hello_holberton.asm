section .data
	message db 'Hello, Holberton', 0xA, 0

section .text
	global main

	extern printf
main:

; push message onto the stack as the first argument to printf
push message
call printf
add rsp, 8 ; adjust the stack pointer to remove arguments

; set the return value to zero (success)
xor, eax, eax
ret
