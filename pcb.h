#ifndef PCB_H
#define PCB_H


typedef enum state_type {
	new, ready, running, interrupted, waiting, halted
} State;

typedef struct pcb {
	State state;
} PCB;

// Functions
char pcb_toString();