#include<stdio.h>
#include<string.h>


struct address {
    int houseNo;
    int block;
    char city[30];
    char state[30];
};

void printAdds(struct address Adds);
int main() {
    struct address Adds[5];
    printf("Enter info of person 1 = ");
    scanf("%d", &Adds[0].houseNo);
    scanf("%d", &Adds[0].block);
    scanf("%s", Adds[0].city);
    scanf("%s", Adds[0].state);
    
    return 0;
}

void printAdd(struct address Adds) { 
    printf("Address is %d,%d,%s,%s\n", Adds.houseNo, Adds.block, Adds.city, Adds.state);
}