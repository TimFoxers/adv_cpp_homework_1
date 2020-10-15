#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef PHONE2_PHONE_H
#define PHONE2_PHONE_H

void push();

void PrintCode();

typedef struct Phone {
    int code;
    int number;
    char name[20];
    struct Phone* next;
}   Phone;

#endif //PHONE2_PHONE_H
