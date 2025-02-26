#include <stdbool.h> 


int ip = 0; // Instruction pointer
int sp = -1; //Stack pointer
int stack[256];

bool running = true;

typedef enum {
    PSH,
    ADD,
    POP,
    SET,
    HLT
} InstructionSet;

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
    }
}
int fetch(){
    return program[ip];
}
int main(){
    while (running){
        eval(fetch());
        ip++;
    }
    int instr = program[ip];
    return 0;
}
