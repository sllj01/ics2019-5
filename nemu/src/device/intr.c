#include "nemu.h"

void dev_raise_intr() {
    cpu.intr = true; 
}
