#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]) {
    if (argc <2 | strcmp(argv[1], "--file") ==0){
        const char* filename = argv[2];
        Stack_link* stack_num = NULL;
        read(&stack_num);
        write(&stack_num, filename);
        sort(&stack_num);
        printf("\n");
        write(&stack_num, filename);
    }
    else {
        printf("Использование: --file filename");
    }
}
