#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"

unsigned int pid = -1;


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

	return pcb;
}

void deconstruct(PCB_p pcb) {
	free(pcb);
	printf("Object deconstructed\n");
}

void setPID(PCB_p pcb) {
	pcb->pid = pid + 1;
}

char toString(FILE *f, PCB_p pcb) {
	printf("PCB #%d-----------------------------------------------------------------\n", pcb->pid);
	printf("PID: %02d, Priority: %02u, State: %s\n", pcb->pid, pcb->priority, getStateString(pcb->state));
	
	fprintf(f, "\n\nPCB #%d----------------------------------------------------------------------\r\n", pcb->pid);
	fprintf(f, "\nPID: %02d, Priority: %02u, State: %s\r\n", pcb->pid, pcb->priority, getStateString(pcb->state));

}

char toString_context(FILE *f, PCB_p pcb) {
	printf("PC: 0, IR: 0, PSR: 0, r0: 0, r1: 0, r2: 0, r3: 0, r4: 0, r5: 0, r6: 0, r7: 0\n\n");
	fprintf(f, "PC: 0, IR: 0, PSR: 0, r0: 0, r1: 0, r2: 0, r3: 0, r4: 0, r5: 0, r6: 0, r7: 0\r\n");
	fprintf(f, "\r\n");
}

	
