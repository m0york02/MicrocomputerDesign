.text
.global add
.global subtract
.global multiply

add:
    ADD    r0, r0, r1
    MOV    pc, lr

subtract:
    SUB    r0, r0, r1
    MOV    pc, lr

multiply:
	MUL    r0, r0, r1
    MOV    pc, lr