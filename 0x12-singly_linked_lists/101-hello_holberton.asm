global mai
nsection .data
    msg db 'Hello, Holberton', 10

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [msg]
    mov eax, 0
    call printf

    mov rsp, rbp
    pop rbp
    ret
