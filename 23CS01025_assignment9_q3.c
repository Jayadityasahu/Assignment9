#include<stdio.h>

struct Time{

    int day;
    int month;
    int year;

};
int compare(struct Time time1, struct Time time2){
    
    if(time1.year>time2.year){
        printf("1");
    }
else if(time1.year>time2.year){
    printf("-1");
}else if(time1.year=time2.year){
    if(time1.month>time2.month){
        printf("1");
    }else if(time1.month<time2.month){
        printf("-1");
    }else if(time1.month=time2.month){
        if(time1.day<time2.day){
            printf("1");}
            else if(time1.day<time2.day){
                printf("-1");
            } else { printf("0");}
        }
    } return 0;
}

 

int main(){

    struct Time time1;
    struct Time time2;
    printf("Enter first time: ");
    scanf("%d %d %d", &time1.day, &time1.month, &time1.year);
    printf("Enter second time: ");
    scanf("%d %d %d", &time2.day, &time2.month, &time2.year);
    compare(time1, time2);

    return 0;
}