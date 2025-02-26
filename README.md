# Simple Virtual Machine (VM)

A minimal stack-based virtual machine written in C. Executes basic instructions like push, pop, add, and halt.

## Features
- Stack-based architecture (256 slots)
- Supports instructions: `PSH`, `POP`, `ADD`, `SET`, `HLT`
- Registers: `A`, `B`, `C`, `D`, `E`, `F`, plus `SP` (stack pointer) and `IP` (instruction pointer)

## Files
- `main.c`: Core VM logic and sample program
- `mac.h`: Header with definitions and prototypes
- `Makefile`: Build script for compilation

## Build and Run
1. Clone the repo: `git clone https://github.com/GeorgeU029/c-virtual-machine`
2. Navigate to directory: 
3. Compile: `make`
4. Run: `./mac`
5. Clean up: `make clean`

## Requirements
- GCC (C compiler)
- Make (build tool)

## Example
The sample program in `main.c`:
- Pushes 5 and 6 onto the stack
- Adds them (11)
- Pops and prints the result

