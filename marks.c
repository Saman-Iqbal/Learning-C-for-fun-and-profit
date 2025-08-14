#include<stdio.h>

int calPercentage(int science, int math, int english);

int main() {
    int sc = 95;
    int math = 99;
    int english = 98;

    printf("Percentage = %d", calPercentage(sc, math, english));

    return 0;
}

int calPercentage(int science, int math, int english) {
    return ((science + math + english) / 3);
}