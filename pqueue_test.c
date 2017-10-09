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
		printf("%d\n", i);
		for (j = 0; j < numbpcb; j++) {
			//printf("%d\n", j);
			p = construct();
			p->priority = rand() % 16;
			printf("%d\n", p->priority);
			//p_toString(pqueue);	
			//p_enqueue(pqueue, p);
		}
	//p_toString(pqueue);
	}
	
	
	
}
