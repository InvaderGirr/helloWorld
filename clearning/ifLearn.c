#include <stdio.h>
#include <stdlib.h>

int maxNum(int num1, int num2);

int main(){


    int a;
    int b;
    printf("Let me tell you which number is higher. Please, give me two numbers:");
    scanf("%d%d", &a, &b);

    printf("%d, is bigger\n", maxNum(a, b));

    return 0;
}

int maxNum(int num1, int num2){

    int result;
    if(num1 > num2){
    result = num1;
    } else {
        result = num2;
    }

    return result;


}
