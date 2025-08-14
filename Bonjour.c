#include<stdio.h>

void printNamaste();  //Function Prototype
void printBonjour();

int main()     //Function Call
{
printf("Enetr i for Indian and f for French : ");
char ch;
scanf("%c", &ch);

if(ch == 'i'){
   printf("Namaste");
}
else {
   printf("Bonjour");
}
 return 0;
}

//Function Definition

void printNamste(){           
    printf("Namaste \n");
}
void printBonjour(){
    printf("Bonjour \n");
}