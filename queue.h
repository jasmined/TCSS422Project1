#ifndef QUEUE_H
#define QUEUE_H

#include "pcb.h"

typedef struct node {
	PCB *pcb;
	struct node *next;
} Node;

typedef struct queue {
	Node *head;
	int size, counter;
}

// Functions

int isEmpty();

#endif

