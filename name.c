#include<stdio.h>

void printString(char arr[]);

int main() {
    char firstname[] = "Saman";
    char lastname[] = "Iqbal";

    printString(firstname);
    printString(lastname);
    return 0;
}

void printString(char arr[]) {
    for(int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}