#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"
#include "queue.h"
int main()
{
queue_p q = init();
int b = q_is_empty(q);
printf("%d\n", b);
printf("%d\n", q->size);
PCB_p pcb1 = construct();
pcb1->priority = rand() % 16;
pcb1->state = new;
printf("2\n");
node_p node1 =construct_node(pcb1);

printf("3\n");
q_enqueue(q, node1);
printf("4\n");
b = q_is_empty(q);
printf("%d\n", b);

node_p deq = q_dequeue(q);
printf("4.125\n");
b = q_is_empty(q);
printf("%d\n", b);
PCB_p pcb2= deq->pcb;
if (deq == NULL) 
  printf("NULL");
// = &deq_node->pcb;
printf("4.25\n");	
FILE *f;
f = fopen("qtest_out.txt", "w");
 //d toString(f, pcb2);
printf("6\n");
b = q_is_empty(q);
printf("%d\n", b);
printf("%d\n", q->size);
//destroy(q);
return 0;
}
