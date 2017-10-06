#include "queue.h"

#define defaultsize 63
queue init()
{
  queue q = (queue) malloc(sizeof (struct));   
  q->first = NULL;
  q->last = NULL;
}
int q_is_empty(queue queue_p)
{
  if (queue_p->size <= 0) return 1;
  else return 0;
}

void q_enqueue(queue queue_p, node node_p)
{
  if (queue_p->last == NULL) {
    queue_p->front = node_p;
    queue_p->last = queue_p->front;
    
  }
  else {
    queue_p->last->next = node_p;
    queue_p->last = node_p;
  }
  queue_p->size++;

}
node_p q_dequeue(queue queue_p)
{
  node_p front_temp= queue_p->front;
  if (front_temp == NULL) {
    
  }
  else {
    if (front_temp->next != NULL) {
      front_temp = front_temp->next;
      
    free(queue_p->front)


}

void destroy(queue queue_p) {
  node_p tempnode;
  node_p tempnode2;
  while(!q_is_empty) {
    tempnode = queue_p->front;
    if(tempnode->next != NULL) {
      tempnode2 = tempnode->NULL;  

    }

//  for(tempnode = queue_p->front; tempnode!=null;tempnode=tempnode2) {
 //     queue_p->front = queue
      
    
  }
  queue_p->front = queue_p->last = NULL;
  
  free queue_p;
}
    


