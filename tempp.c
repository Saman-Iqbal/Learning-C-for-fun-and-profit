#include<stdio.h>

float convertTemp(float Celsius);

int main() {
float far = convertTemp(32);
printf("%f",far);
    return 0;
}

float convertTemp(float Celsius) {
    float far = Celsius * (9/5) + 32;
    return far;
}