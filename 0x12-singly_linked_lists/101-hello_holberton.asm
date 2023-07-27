	section .data
    format db 'Hello, Holberton', 10, 0  ; Null-terminated string for "Hello, Holberton" followed by a newline character

section .text
    extern printf

global main

main:
    mov rdi, format  ; Load the address of the format string into the first argument (RDI)
    xor eax, eax     ; Clear EAX (return value register) to indicate no floating-point arguments
    call printf      ; Call the printf function
    xor eax, eax     ; Set the return value to 0 (optional, as it is already 0 by default)
    ret              ; Return from the main function

