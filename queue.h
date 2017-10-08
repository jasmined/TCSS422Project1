#ifndef QUEUE_H
#define QUEUE_H

#include "pcb.h"
typedef struct node {
	PCB_p pcb;
	struct node_s *next;
} node_s;
typedef node_s * node_p;

typedef struct queue {
  node_p head, last;      
  int size;
} queue_s;
typedef queue_s * queue_p;

// Functions
node_p construct_node(PCB_p p);
queue_p init();

int q_is_empty(queue_p);
void q_enqueue(queue_p, node_p);
node_p q_dequeue(queue_p);
void destroy(queue_p);
#endif

