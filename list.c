#include"list.h"
#include<stdio.h>
#include<stdlib.h>

List* create_list() {
    List *list = malloc(sizeof(List));
    list->len = 0;
    return list;
}

List* insert_list(Date *date, List *list) {
    (list->date)[list->len] = date;
    (list->len)++;
    return list;
}

void print_list(List *list) {
    for (int i=0; i<list->len; i++) {
        printf("%d   ", i);
        print_date(list->date[i]);
    }
}