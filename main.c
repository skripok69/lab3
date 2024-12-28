#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(int argc, char* argv[]) {
    setlocale(LC_ALL, "Rus");
    if (argc < 1 & strcmp(argv[1], "--file") ==0){
        const char* filename = argv[2];
        Stack_link* stack_num = NULL;
        read(&stack_num);
        printf("Исходный ряд: ");
        write(&stack_num, filename);
        sort(&stack_num);
        printf("\n");
        printf("Отсортированный ряд: ");
        write(&stack_num, filename);
        return 0;
    }
    else {
        printf("Использование: --file filename");
        return 1;
    }
}
