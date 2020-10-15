#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "phone.h"

void push(Phone** list, const int code, const int number, const char name[]) {
    Phone* node = malloc(sizeof(Phone));
    node->code = code;
    node->number = number;
    strcpy(node->name, name);
    node->next = *list;
    *list = node;
    free(node);
}

void PrintCode(const Phone* list, const int code) {
    if (list) {
        PrintCode(list->next, code);
        if(list->code == code) {
            printf("%d ", list->number);
            printf("%s", list->name);
            printf("\n");
        }
    }
}

