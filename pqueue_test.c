#include <stdio.h>
#include <stdlib.h>

#include "pcb.h"
#include "queue2.h"
#include "priority_queue.h"

int main(void) {

	
	FILE *f;
	
	p_queue_p pqueue = construct_pqueue();
	
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			PCB_p p = construct();
			p->priority = rand() % 16;	
			p->state = new;
			p->pid = i;
			p_enqueue(pqueue, p);
			p_toString(pqueue, p);
		}
		
		p_dequeue(pqueue);
	}

	
	
}

	
	
