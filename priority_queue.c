#include <stdio.h>
#include <stdlib.h>

#include "priority_queue.h"

#define PRIORITIES 15


p_queue_p construct_pqueue() {
	
	p_queue_p thisPQueue = (p_queue_p) malloc(sizeof(p_queue_p));
	
	for (int i = 0; i < PRIORITIES; i++) {
		queue * queue = (queue) malloc(sizeof(queue));
		thisPQueue->pqueue[i] = queue;
	}
	
	return thisPQueue;
}


void p_enqueue(p_queue_p pqueue, PCB_p pcb) {
	
	int pri_num = pcb->priority;
	
	q_enqueue(pqueue[pri_num], pcb);
	
}

void p_dequeue(p_queue_p pqueue, PCB_p pcb) {
	
	for (int i = 0; i < PRIORITIES; i++) {
		if(!isEmpty(pqueue[i])) {
			q_dequeue(pqueue[i], pcb);
		}
	}
}


void p_toString(p_queue_p pqueue) {
	
}