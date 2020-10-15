#include <stdio.h>
#include <string.h>
#include "phone.h"

int main() {
    int indicator = -1;
    int EnterCode, EnterNumber;
    char EnterName[20];
    Phone* list = NULL;

    while(indicator!=0){
        printf("%s ", "Выберите действие:");
        printf("\n");
        printf("%s ", "Выйти из программы - 0");
        printf("\n");
        printf("%s ", "Вставить номер - 1");
        printf("\n");
        printf("%s ", "Вывести номера по коду - 2");
        printf("\n");
        scanf("%d", &indicator);
        if(indicator == 2){
            printf("%s", "Введите код: ");
            printf("\n");
            fflush (stdout);
            scanf("%d", &EnterCode);
            PrintCode(list, EnterCode); putchar('\n');
        }
        else if(indicator == 1){
            printf("%s", "Введите по очереди: код, номер, имя");
            printf("\n");
            fflush (stdout);
            scanf("%d", &EnterCode);
            scanf("%d", &EnterNumber);
            scanf("%19s", EnterName);
            push(&list, EnterCode, EnterNumber, EnterName);
        }
        else if(indicator == 0){
            break;
        }
        else{
            printf("%s", "Введите одну из трех цифр!");
            printf("\n");
        }
    }
    return 0;
}