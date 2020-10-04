#define _GNU_SOURCE

#include<stdio.h>
#include<stdlib.h>
#include<sys/mman.h>
#include<sys/types.h>
#include<unistd.h>

int main(void){
    char *mem;
    while(1){
        fork();
        mem = mmap(NULL, 10000000, PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0);
        *(mem+rand()%10000000) = 'x';
     //   getchar();
    }
}