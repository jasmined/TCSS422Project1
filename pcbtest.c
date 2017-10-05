#include <stdio.h>
#include <stlib.h>
#include "pcb.h"
int main() {
    PCB_p PCB1 = construct();
    printf("PCB: %s", toString(PCB1));
    setPID(PCB_1); 
    int priority = rand() % 16; 
    PCB1->priority = priority;
    PCB1->size =rand() + 1; 
    printf("Edited PCB: %s", toString(PCB1));


}
    
