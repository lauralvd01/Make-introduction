#ifndef PERSON_H
#define PERSON_H

#include "date.h"

typedef struct _Person {
    char* prenom;
    char* nom;
    Date* date_naissance;
}Person;

Person* create_person(char* prenom, char* nom, Date* date_naissance);

void print_person(Person *person);

Person* dupliquer_person(Person *p);

#endif