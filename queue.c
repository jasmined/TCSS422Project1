#include "queue.h"

#define defaultsize 63
queue init()
{
  queue q = (queue) malloc(sizeof (struct));   
  q->first = null;
  q->last -
}
int q_is_empty(queue queue_p)
{
  if (getSize(queue_p) <= 0) return 1;
  else return 0;
}

void q_enqueue(queue queue_p, node node_p)
{
  if (getSize(queue_p) >= defaultsize)
      printf("too large to enqueue more nodes\n");
  else {
    setLast(queue_p, node_p);
    queue->size++;

      }
}
node q_dequeue(queue queue_p)
{

}

void destroy(queue queue_p) {
  if (getSize(queue_p)) {
    while (queue_p->front) != null) {
    node_p tempnode;
    node_p tempnode2;
    for(tempnode = queue_p->front; tempnode!=null;tempnode=tempnode2;
      queue_p->front = queue

    }
  }
  else {
    free queue_p;
  }
    

}
