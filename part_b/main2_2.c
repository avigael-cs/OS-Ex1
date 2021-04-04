//#define _GNU_SOURCE
#include "part_b.h"
#include <stdio.h>
#include <sched.h>
#include <stdlib.h>
#include <unistd.h>

#define STACK_SIZE 10000
#define count 10
#define one_sec_ 1000000
char childArr[STACK_SIZE+1];

//The function fork and clone processes are using
void print(const char *text){

   for(int i=0; i<count; i++){
      printf("Hello from %s\n", text);
      usleep(one_sec_); //stop time
   }
}

int child(void *params){ //to different between the child and the parent thread
   print("Child thread");
}

int ourClone(){

   int ans = clone(child, childArr+STACK_SIZE,CLONE_PARENT,0);// run "child" in "childArr"'s size and clone parent
   printf("clone ans = %d\n", ans);

   print("Parent");

   return 1;
}
