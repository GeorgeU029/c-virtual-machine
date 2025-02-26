#include <stdio.h>
#include "mac.h"

// Global variable definitions
int stack[STACK_SIZE];
bool running = true;
int registers[NUM_OF_REGISTERS];

// Program definition
const int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT
};

void eval(int instr) {
    switch (instr) {
        case HLT: {
            running = false;
            break;
        }
        case PSH: {
            sp++;
            stack[sp] = program[++ip];
            break;
        }
        case POP: {
            int val_popped = stack[sp--];
            printf("popped %d\n", val_popped);
            break;
        }
        case ADD: {
            int a = stack[sp--];
            int b = stack[sp--];      
            int result = b + a;
            sp++; 
            stack[sp] = result; 
            break;
        }
    }
}

int fetch(void) {
    return program[ip];
}

int main() {
    while (running) {
        eval(fetch());
        ip++;
    }
    return 0;
}