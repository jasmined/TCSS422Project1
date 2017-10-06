#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"


int main(void) {
	
	PCB_p pcb = construct();
	pcb->priority = rand() % 16;
	setPID(pcb);
	toString_pcb(pcb);
	deconstruct(pcb);
	
	printf("------------------------\n");
	for (int n = 0; n < 15; n++) {
		
	}
	printf("------------------------\n");
	
}