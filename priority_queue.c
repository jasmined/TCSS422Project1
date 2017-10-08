#include <stdio.h>
#include <stdlib.h>

#include "priority_queue.h"

#define PRIORITIES 15


p_queue_p construct_pqueue() {
	
	p_queue_p thisPQueue = (p_queue_p) malloc(sizeof(p_queue_p));
	
	for (int i = 0; i < PRIORITIES; i++) {
		queue_p queue = (queue_p) malloc(sizeof(queue));
		*thisPQueue->p_queue[i] = queue;
	}
	
	return thisPQueue;
}


void p_enqueue(p_queue_p pqueue, PCB_p pcb) {
	
	int pri_num = pcb->priority;
       
	
	q_enqueue(pqueue->p_queue[pri_num], pcb);
	
}

PCB_p p_dequeue(p_queue_p pqueue) {
	int j = 16;//int for smallest queue that is not empty;
        node_p deq_node;//node to remove from a queue
        PCB_p deq_pcb;//pcb to receive from queue
	for (int i = PRIORITIES; i >=0; i--) {
		if(!isEmpty(pqueue[i])) {
                        j = i;
			
		}
	}
        if (j < 16) {
          deq_node = q_dequeue(pqueue[j] pcb);
          deq_pcb = deq_node->pcb
        }
        return deq_node;   
  }
}


void p_toString(p_queue_p pqueue) {
//print by each queue priorirty 
//by pid

	
}
