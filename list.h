#ifndef LIST_H
#define LIST_H

#include"date.h"

typedef struct _List{
    int len;
    Date* date[1000];
} List;

List* create_list();

List* insert_list(Date *date, List *list);

void print_list(List *list);

#endif