#include<stdio.h>
#include<string.h>

struct Student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    struct Student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    strcpy(s1.name, "Saman");

    printf("%s \n",s1.name);
    printf("%d \n",s1.roll);
    printf("%f \n",s1.cgpa);
return 0;
}