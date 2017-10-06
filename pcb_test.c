#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"


int main(void) {
	
	PCB_p pcb_array[15];

	PCB_p pcb = construct();
	pcb->priority = rand() % 16;
	setPID(pcb);
	toString(pcb);
	toString_context(pcb);
	// deconstruct(pcb);
	
	// printf("------------------------\n");
	for (int n = 0; n < 15; n++) {
		PCB_p pcb = construct();
		pcb->pid = n;
		pcb->priority = rand() % 16;
		pcb->state = new;
		pcb_array[n] = pcb;
		toString(pcb_array[n]);
		toString_context(pcb_array[n]);
	}
	// printf("------------------------\n");
	
}