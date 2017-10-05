#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"


int main(void) {
	
	// for (int i = 0; i < 5; i++) {
		PCB_p pcb = construct();
		pcb->priority = rand();
		pcb->pid = 12;
		toString(pcb);
		deconstruct(pcb);
	// }

}