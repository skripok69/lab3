#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(Stack_link** top, int num) {
    Stack_link* p = (Stack_link*)malloc(sizeof(Stack_link));
    p->inf = num;
    p->link = *top;
    *top = p;
}

int pop(Stack_link** top) {
    Stack_link* prev = *top;
    int val = prev->inf;
    *top = (*top)->link;
    free(prev);
    return val;
}

void read(Stack_link** top) {
    char stroka[1024];
    Stack_link* temp_stack = NULL;
    fgets(stroka, sizeof(stroka), stdin);
    char* numbers= strtok(stroka, " ");
    int num;
    while (numbers != NULL){
        sscanf(numbers, "%d", &num);
        push(&temp_stack, num);
        numbers = strtok(NULL, " ");
    }
    while (temp_stack != NULL) {
        push(top, pop(&temp_stack));
    }
}

void write(Stack_link** top, const char* filename) {
    FILE *file = fopen(filename, "w");

    Stack_link* temp_stack = NULL;
    int val;
    while ((*top) != NULL) {
        val = pop(top);
        fprintf(file, "%d ", val);
        printf("%d ", val);
        push(&temp_stack, val);
    }
    while (temp_stack != NULL) {
        push(top, pop(&temp_stack));
    }

    fclose(file);
}
