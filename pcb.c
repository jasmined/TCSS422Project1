#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"

unsigned int pid = 0;


int main(void) {
	toString();
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
	return pcb;
}

void deconstruct(PCB_p pcb) {
	free(pcb);
}

void setPID(PCB_p pcb) {
	pcb->pid = pid + 1;
}

char toString(PCB_p pcb) {
	printf("PID: %05d , Priority: %u , State: %s", pcb->pid, pcb->priority, getStateString(pcb->state));
}
	
	