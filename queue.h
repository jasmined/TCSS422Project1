#ifndef QUEUE_H
#define QUEUE_H

#include "pcb.h"
typedef struct node {
	PCB *pcb;
	struct node *next;
} Node;

typedef struct queue {
  Node *head, *last;      
  int size, counter;
}

// Functions
Node constructnode();
queue_p init();

int q_is_Empty(queue_p);
void q_enqueue(queue_p, Node);
q_dequeue(queue_p);

#endif

