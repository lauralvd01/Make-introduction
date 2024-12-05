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

bool date_equal(Date *date1, Date *date2) {
    if(date1->jour==date2->jour
       & date1->mois==date2->mois
       & date1->annee==date2->annee) {
           return true; 
       }
    return false;
}

Date* dupliquer_date(Date *date) {
    Date *date2 = create_date(date->jour,date->mois,date->annee);
    return date2;
}