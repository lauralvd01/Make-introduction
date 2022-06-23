#include "date.h"
#include<stdlib.h>
#include<stdio.h>

Date* create_date(int day, int month, int year) {
    Date *res = malloc(sizeof(Date));
    res -> jour = day;
    res -> mois = month;
    res -> annee = year;
    return res;
}

void print_date(Date *date) {
    printf("%d/%d/%d\n",date ->jour,date ->mois,date ->annee);
}