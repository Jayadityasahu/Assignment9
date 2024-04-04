#include<stdio.h>

struct CourseRecord{

char student_first_name[100];
char student_last_name[100];
char Department[100];
int Course_code[100];
int marks[100];

}; 

int avgmark(int marks[], int count) {
    int sum = 0;
   
    for(int i = 0; i < count; i++) {
         sum += marks[i];
    }
    return sum / count;
}

void chec(int avgmarks) {
    if (avgmarks >= 35) {
        printf("The student has passed.\n");
    } else {
        printf("The student has failed.\n");
    }
}

int main() {
    struct CourseRecord stu;
    int numMarks;

    printf("Enter details of student: ");
    scanf("%s %s %s %d", stu.student_first_name, stu.student_last_name, stu.Department, &stu.Course_code);
    
    printf("Enter number of marks: ");
    scanf("%d", &numMarks);
    
    printf("Enter marks: ");
    for(int i = 0; i < numMarks; i++) {
        scanf("%d", &stu.marks[i]);
    }

    int avgmarks = avgmark(stu.marks, numMarks);
    printf("Average marks: %d\n", avgmarks);
    chec(avgmarks);

    return 0;
}
