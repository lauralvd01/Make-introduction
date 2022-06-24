#include "person.h"
#include "date.h"
#include <stdlib.h>
#include <stdio.h>


Person* create_person(char* prenom, char* nom, Date* date_naissance) {
    Person *person = malloc(sizeof(Person));
    (*person).prenom = prenom;
    // ou person->prenom = prenom;
    (*person).nom = nom;
    (*person).date_naissance = date_naissance;

    return person;
}

void print_person(Person *person) {
    printf("%s, %s, ",person->prenom, person->nom);
    print_date(person->date_naissance);
}

Person* dupliquer_person(Person *p) {
    Person* p2 = create_person(p->prenom,p->nom,p->date_naissance);
    return p2;
}