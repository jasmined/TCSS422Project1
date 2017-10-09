#include <stdlib.h>
#include <string.h>
#include "queue.h"
#include "pcb.h"

queue_p init()//creates a queue and returns a pointer to it
{
  //struct queue_p *retVal = malloc (sizeof (struct 
  queue_p q = (queue_p) malloc(sizeof (q));   
  if (q != NULL)
    q->head = q->last = NULL;
  return q;
}

node_p construct_node(PCB_p p)
{
  node_p n = (node_p) malloc(sizeof (n));
  n->pcb = p;
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
  
  if (q->head == NULL) {
    q->head = q->last = node;
    
  }
  else {
    q->last->next = node;
    q->last = node;
    //node_p tempnode = *q->last;
    //tempnode->next = *node;
    
    //*q->last = tempnode;
    //free (tempnode);
    
  }
  q->size++;

}

node_p q_dequeue(queue_p q)//removes and returns front node of queue if there is a node 
{ 

  //printf("500\n");
  node_p retval;
  retval= *q->head;
  /*if(q->head == q->last)
    q->head = q->last = NULL;
  else
    q->head = node->next;*/
//printf("600\n");
  

  
  q->size--;
  return retval;
  


/* printf("fails to start front_temp");
  if (q_is_empty(q)) 
    return NULL;
   
  node_p front_temp= *q->head;
  printf("fails creating front_temp");
  *q->head = front_temp->next;
  printf("fails resetting front");
  PCB_p *retval = front_temp->pcb;
  printf("fails creating return value");
  if (front_temp == NULL) {
    return NULL;
  }
  else {
    if (front_temp->next != NULL) {
      *q->head = front_temp->next;  
      
      
      }
  }*/
    
    //return front_temp;
 
  
}
void destroy(queue_p q)//destroys queue object
 {
  node_p tempnode;
  node_p tempnode2;
  while(!q_is_empty(q)) {
    tempnode = *q->head;
    if(tempnode->next != NULL) {
      tempnode2 = tempnode->next;  
      *q->head = tempnode2;
      //free (tempnode);
    }
    
//
//  for(tempnode = queue_p->front; tempnode!=null;tempnode=tempnode2) {
 //     queue_p->front = queue
      
    
  }
  //q->head = q->last = NULL;
  if (q->head != NULL) 
    free(*q->head);
  if (q->last != NULL) 
    free(*q->last);
  free (q);
}
String toString(queue_p) {
  Nod


}

