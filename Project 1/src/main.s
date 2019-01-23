.section "text"
.global addition
.global subtraction
.global multiplication

addition:
    ADD    r0, r0, r1
    MOV    pc, lr

subtraction:
    SUB    r0, r0, r1
    MOV    pc, lr

multiplication:
	MUL    r0, r0, r1
    MOV    pc, lr

.end
