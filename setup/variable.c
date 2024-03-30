#include <stdio.h>
int main() {
    int myNum1, myNum2, myResult;

    printf("Sum of value: ");

    scanf("%d %d", &myNum1, &myNum2);

    myResult = myNum1 + myNum2;

    printf("%d", myResult);

    return 0;
}