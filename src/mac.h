#ifndef VM_H
#define VM_H

#include <stdbool.h>

// Constants
#define STACK_SIZE 256

// Register definitions
 int sp = 0; // Stack pointer
 int ip =  0; // Instruction pointer

// Enumerations
typedef enum {
    PSH,
    ADD,
    POP,
    SET,
    HLT
} InstructionSet;

typedef enum {
    A, B, C, D, E, F,
    NUM_OF_REGISTERS
} Registers;

// Global variables
extern int stack[STACK_SIZE];
extern bool running;
extern int registers[NUM_OF_REGISTERS];

// Function prototypes
int fetch(void);
void eval(int instr);

#endif // VM_H