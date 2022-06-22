#ifndef DATE_H
#define DATE_H

typedef struct _Date {
    int jour;
    int mois;
    int annee;
} Date;

Date* create_date(int day, int month, int year);
void print_date(Date *date);

#endif
