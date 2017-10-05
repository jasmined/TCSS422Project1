#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"

unsigned int pid = 0;


// int main(void) {
	// PCB_p pcb = construct();
	// setPID(pcb);
	// toString(pcb);
// }

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
	printf("Object deconstructed");
}

void setPID(PCB_p pcb) {
	pcb->pid = pid + 1;
}

char toString(PCB_p pcb) {
	printf("PID: %02d, Priority: %u, State: %s, PC: %02d\n", pcb->pid, pcb->priority, getStateString(pcb->state), pcb->context->pc);
}
	
	