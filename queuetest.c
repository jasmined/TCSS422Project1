#include <stdio.h>
#include <stdlib.h>
#include "pcb.h"
#include "queue2.h"
int main()
{
FILE *f;
f = fopen("qtest_out.txt", "w");
PCB_p p;
queue_p q = create();
int b = rand() % 20 + 9;
printf("%d\n", b);
//printf("%d\n", q->size);
for(int i = 0; i < b; i++) {
  p = construct();
  //printf("%d\n", b);
  p->priority = rand() % 16;
  p->state = new;
  q_enqueue(q, p);
  //printf("%d\n", b);
  printf("Q: Count =%d: ",q->size);
  //printf("%d\n", b);
  writeQueue(q);
  //printf("%d\n", b);
  printf(" : contents: ");
  toString(p);
  }
printf("%d\n", q->size);
fprintf(f, "\nend_of_stream\n");	
fclose(f);

 //d toString(f, pcb2);
//printf("6\n");
//b = q_is_empty(q);
//printf("%d\n", b);
//printf("%d\n", q->size);
//destroy(q);
return 0;
}
