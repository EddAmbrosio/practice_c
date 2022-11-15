#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day, month, year;
} Data;

typedef struct {
    char name[50];
    Data data; //variable data from type struct Data
} Person;

typedef struct no {
    Person p; //variable p from type struct Person
    struct no *next; //pointer variable 'next' to struct 'no'

} No;

Person readPerson() {
    Person p; //variable p from type Struct Person

    printf("\nType the name and the data of your year-born: (dd mm aaaa)\n");
    scanf("%49[^\n]", p.name, &p.data.day, &p.data.month, &p.data.year);
    return p;

}

void printPerson (Person p) {
    printf("\nName: %s\nDate: %2d/%2d/%4d\n", p.name, p.data.day, p.data.month, p.data.year);
}

//function to the operation push
No* push(No* top) {
    No* new = malloc(sizeof(No));

    if(new) {
        new->p = readPerson(); 
        new->next = top;
        return new;
    } else {
        printf("\nError at trying to allocate the memory!!!\n");
        return NULL;
    }
}

No* pop(No **top) {
    if(top) {
        No* remove = *top;
        *top = remove->next;
        return remove;
    } else 
        printf("\nPilha vazia!\n");
    return NULL;
    
}

int main(void) {
    No *top = NULL;
    int option;

    do { 
        printf("\n0 - Sair\n1 - Push\n2 - Pop\n3 - Print\n");
        scanf("%d", &option);
        getchar();

        switch (option) {
        case 1: 
            top = push(top);
            break;
        case 2: 
            
            break;
        case 3: 
            
            break;
        default:
            if(option != 0)
                printf("\nInvalid Option!!!!\n");
        }
    }
    while (option != 0);

    return 0;
}