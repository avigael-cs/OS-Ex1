#include "part_b.h"
#include <stdio.h>
#define _GNU_SOURCE
int main()
{
    printf("*********************Fork :************************\n");
    ourFork();

    printf("*********************Clone :************************\n");
    ourClone();

    printf("***********************Daemon :*********************\n");
    ourDaemon();
    
    return 0;
}
