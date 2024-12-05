#ifndef DATE_H
#define DATE_H

typedef struct _Date {
    int jour;
    int mois;
    int annee;
} Date;

Date* create_date(int day, int month, int year);

void print_date(Date *date);

typedef int bool;
#define false 0;
#define true 1;

int date_equal(Date *date1, Date *date2);

Date* dupliquer_date(Date *date);

#endif
