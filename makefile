all: pcb_test queue_test priority_queue_test
pcb_test: pcb_test.c pcb.c
	gcc -o pcb_test pcb_test.c pcb.c 
queue_test: queuetest.c queue2.c pcb.c
	gcc -o queue_test queuetest.c queue2.c pcb.c 
priority_queue_test: pqueue_test.c priority_queue.c queue2.c pcb.c 
	gcc -o priority_queue_test pqueue_test.c priority_queue.c queue2.c pcb.c 
