#include<stdio.h>


int main() {
    FILE *fptr;
    fptr = fopen("Student.txt","w");
    char name[100];
    printf("Enter a name = ");
    scanf("%s", &name);

    fprintf(fptr, "%s", name);

    fclose(fptr);
}