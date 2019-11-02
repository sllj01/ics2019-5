#include "cpu/exec.h"
//arith.c
make_EHelper(sub);
make_EHelper(add);
make_EHelper(cmp);
make_EHelper(neg);
make_EHelper(inc);
make_EHelper(dec);
make_EHelper(imul1);
make_EHelper(imul2);
make_EHelper(mul);
make_EHelper(adc);
make_EHelper(sbb); 
make_EHelper(div);
make_EHelper(idiv);
//cc.c
make_EHelper(setcc);
//control.c
make_EHelper(call);
make_EHelper(ret);
make_EHelper(jcc);
make_EHelper(jmp);
make_EHelper(jmp_rm);
make_EHelper(call_rm);
//data-mov.c
make_EHelper(push);
make_EHelper(pop);
make_EHelper(mov);
make_EHelper(lea);
make_EHelper(movzx);
make_EHelper(movsx);
make_EHelper(leave);
make_EHelper(cltd);
//logic.c
make_EHelper(test);
make_EHelper(xor);
make_EHelper(or);
make_EHelper(and);
make_EHelper(shl);
make_EHelper(sar);
make_EHelper(shr);
make_EHelper(not);
//prefix.c

//special.c
make_EHelper(operand_size);
make_EHelper(inv);
make_EHelper(nop);
//system.c
make_EHelper(nemu_trap);
make_EHelper(in);
make_EHelper(out);
