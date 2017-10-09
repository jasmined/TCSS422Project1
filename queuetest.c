#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pcb.h"
#include "queue2.h"
int main() {

	FILE *f;
	f = fopen("qtest_out.txt", "w");

	queue_p q = create();
	srand(time(NULL));
	int b = rand() % 20 + 10;
	int c;

	for(int i = 0; i < b; i++) {
		PCB_p p = construct();
		p->priority = rand() % 16;

		setPID(p);
		  
		p->state = new;
		q_enqueue(q, p);
		  
		writeQueue(q, f);

		toString(p);
		toFile(f, p);
	}

	fprintf(f, "\nend_of_stream\n");

	while(!q_isEmpty(q)) {
		q_dequeue(q);
		fprintf(f, "Q: Count =%d: ",q->size);

		writeQueue(q, f);

	}	
	fclose(f);


	destroy(q);
	return 0;
}
