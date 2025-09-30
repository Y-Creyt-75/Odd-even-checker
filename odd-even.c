#include <stdio.h>

void IsEven(int x);

void IsOdd(int x) {
    if (x%2 != 0) {
        printf("You are an odd one mate!!!\n");
    }
    else {
        IsEven();
    }
   return;
}

void IsEven(int x) {
    if (x%2 == 0) {
        printf("You are balanced and even!!!\n");
    }
    return;
}

int main(void) {
    int x;
   printf("give a no to know if it is odd or even\n");
    scanf("%d",&x);
    IsOdd(x);
    return 0;
}