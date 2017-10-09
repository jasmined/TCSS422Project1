#include <stdio.h>
#include <stdlib.h>

#include "pcb.h"
#include "queue2.h"

int main() {
	queue_p queue = create();
	queue->size = 0;

PCB_p pcb = construct();
	q_enqueue(queue, pcb);
	
	printf("Empty: %d\n", q_isEmpty(queue));	
	printf("Size: %d\n", queue->size);
	q_toString(queue, pcb);
	
	q_dequeue(queue);

	printf("Empty: %d\n", q_isEmpty(queue));	
	printf("Size: %d\n", queue->size);
	q_toString(queue, pcb);
	
	PCB_p pcb2 = construct();
	q_enqueue(queue, pcb2);
	
	printf("Empty: %d\n", q_isEmpty(queue));	
	printf("Size: %d\n", queue->size);
	q_toString(queue, pcb2);
	
	PCB_p pcb3 = construct();
	q_enqueue(queue, pcb3);
	
	printf("Empty: %d\n", q_isEmpty(queue));	
	printf("Size: %d\n", queue->size);
	q_toString(queue, pcb3);
	
	PCB_p pcb4 = construct();
	q_enqueue(queue, pcb4);
	
	printf("Empty: %d\n", q_isEmpty(queue));	
	printf("Size: %d\n", queue->size);
	q_toString(queue, pcb4);
	
}

queue_p create() {
	queue_p queue = (queue_p) malloc(sizeof(queue));	
	queue->head = queue->end = NULL;
	
	return queue;	
}

int q_isEmpty(queue_p queue) {
	if (queue->head == NULL) {
		return 1;
	} else {
		return 0;
	}
}

void q_enqueue(queue_p queue, PCB_p pcb) {
	node_p node = (node_p) malloc(sizeof(node));
	node->pcb = &pcb;
	node->next = NULL;

	
	if (q_isEmpty(queue) == 1) {
		queue->head = queue->end = node;
	} else {
		queue->end->next = node;
		queue->end = node;
	}
	
	queue->size++;	
}


void q_dequeue(queue_p queue) {
	
	if (queue->head == NULL) {
		printf("Queue is empty. Nothing to dequeue.");
	} else {
		node_p temp = (node_p) malloc(sizeof(temp));
		queue->head = queue->head->next;
		free(temp);
	}
	
	queue->size--;
}

void q_toString(queue_p queue, PCB_p pcb) {
	printf("Q: Count=%i: ", queue->size);
	
	for (int i = 0; i < queue->size; i++) {
		printf("P%i-", i+1);
		if (i == queue->size - 1) {
			printf("*");
		} else {
			printf(">");
		}
	}
	
	printf(" : contents: \n");
	
	toString(pcb);
}