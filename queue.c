#include <stdlib.h>
#include "queue.h"
#include "pcb.h"

queue_p init()//creates a queue and returns a pointer to it
{
  //struct queue_p *retVal = malloc (sizeof (struct 
  queue_p q = (queue_p) malloc(sizeof (q));   
  q->head = NULL;
  q->last = NULL;
  return q;
}

node_p construct_node(PCB_p p)
{
  node_p n = (node_p) malloc(sizeof (n));
  n->pcb = &p;
  n->next = NULL;
  return n;
  
}
int q_is_empty(queue_p q)//returns 1 if the queue is empty, 0 if not
{
  if (q->size <= 0) return 1;
  else return 0;
}
//fix this pls
void q_enqueue(queue_p q, node_p node)//adds node to back of queue
{
  if (q->last == NULL) {
    q->head = &node;
    q->last = q->head;
    
  }
  else {
    node_p tempnode = *q->last;
    tempnode->next = node;
    
    *q->last = tempnode;
    free (tempnode);
    
  }
  q->size++;

}

node_p q_dequeue(queue_p q)//removes and returns front node of queue if there is a node 
{ 

  if (q_is_empty(q)) {
    return NULL;
  } else {
  node_p front_temp= *q->head;
  /*if (front_temp == NULL) {
    return NULL;
  }
  else {
    if (front_temp->next != NULL) {
      *q->head = front_temp->next;  
      
      
      }
  }*/
    q->size--;
    return front_temp;
 
  }
}
void destroy(queue_p q)//destroys queue object
 {
  node_p tempnode;
  node_p tempnode2;
  while(!q_is_empty(q)) {
    tempnode = *q->head;
    if(tempnode->next != NULL) {
      tempnode2 = tempnode->next;  

    }
//
//  for(tempnode = queue_p->front; tempnode!=null;tempnode=tempnode2) {
 //     queue_p->front = queue
      
    
  }
  //q->head = q->last = NULL;
  
  free (q);
}


