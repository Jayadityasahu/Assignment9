#include<stdio.h>



    struct company{

        char name[100];
        char address[100];
        char phone[100];
        int noofemployees;

    };  

     int main(){
      struct company comp1 = {"Vikas", "Kharvel", "65", 4};
      struct company comp2 = {"Amit", "California", "79", 6};
      printf("%s", comp1.name);
      }

