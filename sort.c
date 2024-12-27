#include "header.h"
#include <stdio.h>
#include <stdlib.h>


void sort(Stack_link** top) {
    Stack_link* temp_stack = NULL;
    while (*top != NULL) {
        int tmp = pop(top);
        while (temp_stack != NULL && (temp_stack->inf) > tmp) {
            push(top, pop(&temp_stack));
        }
        push(&temp_stack, tmp);
    }
    while (temp_stack != NULL) {
        push(top, pop(&temp_stack));
    }
}

