#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "pcb.h"
#include "queue.h"

typedef struct p_queue {
	queue_p * p_queue[16];
	
} p_queue_s;

typedef p_queue_s * p_queue_p;

p_queue_p construct_pqueue();

void p_enqueue(p_queue_p pqueue, PCB_p pcb);
PCB_p p_dequeue(p_queue_p pqueue);
void p_toString(p_queue_p pqueue);






#endif
	
	
