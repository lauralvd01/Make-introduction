#include "date.h"
#include "person.h"
#include "list.h"
#include<stdio.h>

int main() {
    Date *d1 = create_date(22,6,2022);
    print_date(d1);

    Person *person =  create_person("Yo","Han", d1);
    print_person(person);

    Date *d2 = create_date(22,6,2022);
    printf("%d\n", date_equal(d1,d2));

    Date *d3 = dupliquer_date(d1);
    print_date(d3);

    Person *p2 = dupliquer_person(person);
    print_person(p2);

    List *list = create_list();
    insert_list(d1,list);
    insert_list(d2,list);
    print_list(list);
}


