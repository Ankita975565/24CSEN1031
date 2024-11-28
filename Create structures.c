#include <stdio.h>
#include <string.h>
struct student{
    int rollno;
    char name[15];
    float age;
    char gender;
};
int main() {
    struct student s1;
    printf("Size of student structure is %d", sizeof(s1));
    s1.rollno = 2024040136;
    strcpy(s1.name,"Ankita Ghosh");
    s1.age = 16;
    s1.gender = 'F';
    
    printf("\nRoll no: %d",s1.rollno);
    printf("\nName: %s",s1.name);
    printf("\nAge: %f",s1.age);
    printf("\nGender: %c",s1.gender);
    return 0;
}

OUTPUT
/tmp/p0dvk8sNMd.o
Size of student structure is 28
Roll no: 2024040136
Name: Ankita Ghosh
Age: 19.500000
Gender: M

=== Code Execution Successful ===
