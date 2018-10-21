	global _start

	section .text
_start: mov	rax, 1			; put 1 into temporary register
	mov	rdi, 1			; write to stdout
	mov	rsi, message		; passes address of string to stdout
	mov	rdx, 17			; allocating 17 bytes for our string
	syscall				; OS will write
	mov	rax, 60			; exit
	xor	rdi, rdi		; 1 XOR 1 = 0 so exit code is '0'
	syscall

	section .data
message: db	"Hello, Holberton", 10	; 10 is '\n'
