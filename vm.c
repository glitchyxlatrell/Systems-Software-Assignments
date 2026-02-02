/*
Assignment:
vm.c - Implement a P-machine virtual machine
Authors: <Your Name(s) Here>
Language: C (only)
To Compile:
gcc -O2 -Wall -std=c11 -o vm vm.c
To Execute (on Eustis):
./vm input.txt
where:
input.txt is the name of the file containing PM/0 instructions;
each line has three integers (OP L M)
Notes:
- Implements the PM/0 virtual machine described in the homework
instructions.
- No dynamic memory allocation, no pointer arithmetic, and
no function-like macros.
- Does not implement any VM instruction using a separate function.
- Runs on Eustis.
Class: COP 3402 - Systems Software - Spring 2026
Instructor : Dr. Jie Lin
Due Date: Monday, February 9th, 2026
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
printf("argc = %d\n", argc);
for (int i = 0; i < argc; i++)
{
printf("argv[%d] = %s\n", i, argv[i]);
}
printf("\n");
if (argc > 1)
{
int x = atoi(argv[1]); // convert string to int (simple)
printf("Converted argv[1] to int: %d\n", x);
}
else
{
printf("No extra arguments provided.\n");
printf("Try: ./00_args 123\n");
}
return 0;
}
