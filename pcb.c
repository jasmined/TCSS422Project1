#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"

unsigned int pid = 0;


int main(void) {
	PCB_p pcb = construct();
	setPID(pcb);
	toString(pcb);
	toString_context(pcb);
}

char* getStateString(enum state_type state) {
	switch(state) {
		case new:
			return "new";
		case ready:
			return "ready";
		case running:
			return "running";
		case interrupted:
			return "interrupted";
		case waiting:
			return "waiting";
		case halted:
			return "halted";
		default:
			return "null";
	}
		
}
	

PCB_p construct() {
	PCB_p pcb = (PCB_p) malloc(sizeof(pcb));
	pcb->pid = pid;
	pcb->priority = 1;
	pcb->state = new;
	pcb->context->pc = 0;
	return pcb;
}

void deconstruct(PCB_p pcb) {
	free(pcb);
	printf("Object deconstructed\n");
}

void setPID(PCB_p pcb) {
	pcb->pid = pid + 1;
}

char toString(PCB_p pcb) {	
	printf("PCB #%d----------------------------------------------------------------------\n"
	"PID: %d, Priority: %u, State: %s, PC: %02d\n", 
	pcb->pid, pcb->pid, pcb->priority, getStateString(pcb->state), pcb->context->pc);
}

char toString_context(PCB_p pcb) {
	printf("PC: 0, IR: 0, PSR: 0, r0: 0, r1: 0, r2: 0, r3: 0, r4: 0, r5: 0, r6: 0, r7: 0\n");
	printf("----------------------------------------------------------------------------\n");
}
	
	
	