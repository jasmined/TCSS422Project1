#include <stdio.h>
#include <stdlib.h>

#include "pcb.h"
#include "queue2.h"
#include "priority_queue.h"

int main(void) {

	
	FILE *f;
	f = fopen("pqueue_out.txt", "w");
	p_queue_p pqueue = construct_pqueue();
	
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d  %d\n", i, j);
			PCB_p p = construct();
			p->priority = rand() % 16;	
			p->state = new;
			setPID(p);
			p_enqueue(pqueue, p);
			//p_toString(pqueue);
		}
		
		p_dequeue(pqueue);

	}

	
	fclose(f);
}

	
	
