#include<stdio.h>
// marks
int main(){
char ch;
printf("Enter character = ");
scanf("%c", &ch);
if (ch >= 'A' && ch <= 'Z') {
    printf("Upper case \n");
}
else if(ch >= 'a' && ch <= 'z') {
printf("Lower case \n");
}
else{
    printf("Not english letter n");
}
	return 0;
  
}
