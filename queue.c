#include <stdlib.h>
#include "queue.h"
#include "pcb.h"

queue_p init()
{
  //struct queue_p *retVal = malloc (sizeof (struct 
  //PCB_p pcb = (PCB_p) malloc(sizeof(pcb));
  queue_p q = (queue_p) malloc(sizeof (q));   
  q->head = NULL;
  q->last = NULL;
}
int q_is_empty(queue_p q)
{
  if (q->size <= 0) return 1;
  else return 0;
}
//fix this pls
void q_enqueue(queue_p q, node_p node)
{
  if (q->last == NULL) {
    *q->head = node;
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

node_p q_dequeue(queue_p q)
{
  node_p front_temp= *q->head;
  if (front_temp == NULL) {
    return NULL;
  }
  else {
    if (front_temp->next != NULL) {
      *q->head = front_temp->next;  
      return front_temp;
      
      }
  }
    free(front_temp);

  
}
//fix this shit
void destroy(queue_p q)
 {
  node_p tempnode;
  node_p tempnode2;
  //while(!q_is_empty(q)) {
   // tempnode = *q->head;
   // if(tempnode->next != NULL) {
    //  tempnode2 = tempnode->next;  

   // }
//
//  for(tempnode = queue_p->front; tempnode!=null;tempnode=tempnode2) {
 //     queue_p->front = queue
      
    
 // }
  //q->head = q->last = NULL;
  
  free (q);
}
    


