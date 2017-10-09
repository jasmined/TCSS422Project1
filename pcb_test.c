#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"


int main(void) {
	
	FILE *f;
	
	f = fopen("pcb_out.txt", "w");
	
	PCB_p pcb_array[10];
	
	// Create a new PCB with no manipulations
	// and print out its contents.

	PCB_p pcb = construct();
	pcb_array[0] = pcb;
	toString(pcb);
	toString_context(pcb);
	toFile(f, pcb);
	
	
	// Generates a number of PCBs with randomized 
	// priority and stores to a file.
	for (int n = 1; n < 10; n++) {
		PCB_p pcb = construct();
		pcb->pid = n;
		pcb->priority = rand() % 16;
		pcb->state = new;
		pcb_array[n] = pcb;
		toString(pcb_array[n]);
		toString_context(pcb_array[n]);
		toFile(f, pcb);
	}


	deconstruct(pcb);
}