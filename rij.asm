#baseAddr 0000
add $t0, $zero, $zero;
add $t1, $zero, $zero;
addi $t2, $zero, 20;
Loop1: lw $t3, 0x10( $t1 )
add $t0, $t0, $t3
addi $t1, $t1, 4
addi $t2, $t2, -1
beq $t2, $zero, Loop2
j Loop1
Loop2: sw $t3, 0x30( $zero )