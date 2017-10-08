#ifndef QUEUE_H
#define QUEUE_H

#include "pcb.h"
typedef struct node {
	PCB_p *pcb;
	struct node *next;
} node_s;
typedef node_s * node_p;

typedef struct queue {
  node_p *head, *last;      
  int size, counter;
} queue_s;
typedef queue_s * queue_p;

// Functions
node_p constructnode();
queue_p init();

int q_is_Empty(queue_p);
void q_enqueue(queue_p, node_p);
node_p q_dequeue(queue_p);

#endif

