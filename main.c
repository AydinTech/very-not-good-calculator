#include <stdio.h>

int main() {

    int firstnumber;
    int secondnumber;
    char operator;
    int answer;
    char * add = "a", * sub = "s", * div = "d", * mul = "m";
    int close;

    printf("=======Calculator=======\n\n");
    printf("What is the first number?\n");
    scanf(" %i", &firstnumber);
    printf("\nWhat is the second number?\n");
    scanf(" %i", &secondnumber);
    printf("\nEnter a for addition, s for subtraction, m for multiplication and d for division and press enter.\n");
    scanf(" %1c", &operator);
    printf("\nYou chose for the operator %c.\n", operator);
    printf("The numbers you entered were %i and %i.\n", firstnumber, secondnumber);

    if(operator == *add) {
        answer = firstnumber + secondnumber;
        printf("\nThe answer is %i.\n", answer);
    }
    if(operator == *sub) {
        answer = firstnumber - secondnumber;
        printf("\nThe answer is %i.\n", answer);
    }
    if(operator == *mul) {
        answer = firstnumber * secondnumber;
        printf("\nThe answer is %i.\n", answer);
    }
    if(operator == *div) {
        answer = firstnumber / secondnumber;
        printf("\nThe answer is %i.\n", answer);
    }

        printf("Press any key and enter to close the calculator. ");
        scanf("%i", close);
    return 0;
}