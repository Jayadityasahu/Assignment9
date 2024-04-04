 #include<stdio.h>

 struct class{

        char rollno[189];
        char name[100];
        char address[100];
        int age[100];
        int avgmarks[100];

    };  

    int main(){

        struct class studen1 = {"46788", "hggn", "gncb", 436, 647};
        printf("%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
         struct class studen2 = {"46789", "hggd", "gnsb", 436, 627};
        printf("\n%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
         struct class studen3 = {"46790", "hggw", "gnwb", 436, 677};
        printf("\n%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
         struct class studen4 = {"46791", "hggs", "gnbb", 436, 687};
        printf("\n%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
         struct class studen5 = {"46792", "hggs", "gnjb", 436, 657};
        printf("\n%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
         struct class studen6 = {"46793", "hggv", "gnmb", 436, 637};
        printf("\n%s %s %s %d %d", studen1.rollno, studen1.name, studen1.address, studen1.age, studen1.avgmarks );
    }