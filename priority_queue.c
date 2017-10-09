#include <stdio.h>
#include <stdlib.h>

#include "priority_queue.h"
#include "queue2.h"
#include "pcb.h"

#define PRIORITIES 15

int main() {
	
	p_queue_p pqueue = construct_pqueue();
	
	PCB_p pcb = construct();
	pcb->priority = 4;
	p_enqueue(pqueue, pcb);
	
}

// done
p_queue_p construct_pqueue() {
	
	p_queue_p thisPQueue = (p_queue_p) malloc(sizeof(p_queue_p));
	
	for (int i = 0; i < PRIORITIES; i++) {
		queue_p queue = (queue_p) malloc(sizeof(queue_p));
		thisPQueue->pqueue[i] = queue;
	}
	
	return thisPQueue;
}


void p_enqueue(p_queue_p thisPQueue, PCB_p pcb) {
	
	// reminder: without assigning priority number,
	// this gives a seg fault.
	int pri_num = pcb->priority;
	q_enqueue(thisPQueue->pqueue[pri_num], pcb);
	
}

void p_dequeue(p_queue_p thisPQueue) {
	
	for (int n = 0; n < PRIORITIES; n++) {
		// if queue at priority N is NOT empty, pass queue to
		// dequeue in queue class.
		if(q_isEmpty(thisPQueue->pqueue[n]) == 0) {
			q_dequeue(thisPQueue->pqueue[n]);
		}
	}
}


void p_toString(p_queue_p pqueue) {
	
}