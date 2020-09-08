    .global convert_char
    .global Check_char_Upper_case
    .global Check_char_Lower_case
    .cpu cortex-m0
    .align 2
    
convert_char:
    push { lr }
    mov r1, r0
    
Check_char_Upper_Case:
    sub r1, r1, #65
    BLT Check_char_Lower_case
    sub r1, r1, #25
    BGT Check_char_Lower_case
    add r0, r0, #32
    b done
    
Check_char_Lower_case:
	mov r1, r0
    sub r1, r1, #97
    BLT done
    sub r1, r1, #25
    BGT done
    sub r0, r0, #32
    b done

done:
    pop { pc } 