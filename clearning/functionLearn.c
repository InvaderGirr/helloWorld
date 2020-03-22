#include <stdio.h>
#include <stdlib.h>

double cube(double userNum){

    double result = pow(userNum, 3);
    return result;
}

int main(){

    double userNum;

    printf("Give us a number you want to have cubed: ");
    scanf("%lf", &userNum);
    cube(userNum);
    printf("Answer: %f", cube(userNum) );

    return 0;
}
