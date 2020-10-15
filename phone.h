#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PHONE2_PHONE_H
#define PHONE2_PHONE_H

typedef struct Phone {
    int code;
    int number;
    char name[20];
    struct Phone* next;
}   Phone;

void push(Phone** list, int code, int number, const char name[]);
void PrintCode(const Phone* list, int code);

#endif //PHONE2_PHONE_H