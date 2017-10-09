#include <stdio.h>
#include <stdlib.h>

#include "pcb.h"
#include "queue2.h"
#include "priority_queue.h"

int main(void) {
	
	p_queue_p pqueue = construct_pqueue();
	PCB_p p;
	int numbpcb = 10;
	int i, j;
	for (i = 0; i< numbpcb; i++) {
		for (j = 0; j < numbpcb; j++) {
			p = construct();
			p->priority = rand() % 16;	
			p_enqueue(pqueue, p);
		}
	p_toString(pqueue);
	}
	
	
	
}
