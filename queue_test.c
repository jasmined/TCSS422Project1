#include <stdio.h>
#include <stdlib.h>

#include "queue.h"
#include "pcb.h"


int main(void) {
	
	FILE *f;
	
	f = fopen("queue_out.txt", "w");
	
	PCB_p pcb_array[15];

	PCB_p pcb = construct();
	pcb->priority = rand() % 16;
	setPID(pcb);
	
	deconstruct(pcb);
	
}