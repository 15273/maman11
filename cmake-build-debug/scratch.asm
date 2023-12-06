# maman 12 q3 2022a
#in the settings "initialize program counter to global main"
.data
msg1: .asciiz "\nPlease enter an integer -9999 to +9999:\n"
wrong_input:    .asciiz "\n wrong input Please Enter again:\n"
.text
.globl main
wrong:
    li $v0, 4
        la $a0, wrong_input
        syscall
main:
#################################################################
        li $v0, 4
        la $a0, msg1
        syscall
        li $v0, 5
        syscall

        bgt $v0, 9999, wrong
        blt $v0, -9999, wrong
        move $s0,$v0
