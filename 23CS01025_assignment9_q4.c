#include<stdio.h>

struct Address{

    int street;
    char city[200];
    int zipcode;
};

struct Person{

   char name[100];
   struct Address address;
    
};
int main(){
    struct Person person;
    printf("Enter name:");
    scanf("%s",&person.name);
    printf("\nEnter street:");
    scanf("%d", &person.address.street);
    printf("\nEnter city:");
    scanf("%s", &person.address.city);
    printf("\nEnter zipcode:");
    scanf("%d", &person.address.zipcode);
    printf("\n%s", person.name);
    printf("\n%d", person.address.street);
    printf("\n%s", person.address.city);
    printf("\n%d", person.address.zipcode);
    return 0;
}
