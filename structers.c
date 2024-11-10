#include<stdio.h>
//student is a composite datatype
struct student{
    int rollno; char name[20]; int semesterNuber;
    float fees;
    char course[50];
}; 
struct student s;
int main() {
    printf("%d\t\t",s.rollno);
    printf("%f\t\t",s.fees);
    s.rollno=2345; s.fees=520000.12f;
    printf("%d\t\t",s.rollno);
    printf("%f\t\t",s.fees);

}