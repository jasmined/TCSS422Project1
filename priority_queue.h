#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include "pcb.h"
#include "queue2.h"

typedef struct p_queue {
	queue_p *pqueue[16];
	
} p_queue_s;

typedef p_queue_s * p_queue_p;

p_queue_p construct_pqueue();
void p_enqueue(p_queue_p thisPQueue, PCB_p pcb);
void p_dequeue(p_queue_p thisPQueue);
//void p_toString(p_queue_p pqueue);



#endif
	
	
