#include<stdio.h>

int main1() {
    printf("hello world~\n");
    return 0;
}


int main() {
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, two, ten - two);
    printf("Doing it wrong：");
    printf("%d minus %d is %d\n", ten);
    return 0;
}