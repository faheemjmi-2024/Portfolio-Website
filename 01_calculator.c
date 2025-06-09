/*#include <stdio.h>

int main(){

    float num1, num2, result;
    char operator;

    //Entering the second operator.

    printf("Enter first number:");
    scanf("%f", &num1);

    //Giving the operator.

    printf("Enter an operator (+,-,/,*):");
    scanf(" %c", &operator);

    //Entering second number.

    printf("Enter second number:");
    scanf(" %f", &num2);

    //Perform calculation based on the given operator.

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("The addition of the given number:%.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The subtraction of given number is:%.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The multiplication of givin number is:%.2f\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }else{
                printf("Error: Division by zero is not possible..\n");
            }
            break;
        default:
            printf("Invalid operator: Division not possible...");    
        }
     
    return 0;
}*/
#include <stdio.h>
int main(){
    float num1, num2, result;
    char operator;

    printf("Enter the First number:");
    scanf("%f\n", &num1);

    printf("Enter the operator (+,-,*,/):");
    scanf("%c", &operator);

    printf("Enter the second number:");
    scanf("%f\n", &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("The sum of the two numbers are : %.2f", result);
        break;
        case '-':
            result = num1 - num2;
            printf("The difference of two numbers are : %2f", result);
        break;
        case '*':
            result = num1 * num2;
            printf("The multiplication of two numbers are : %.2f", result);
        break;
        case'/':
            if (num2 != 0){
                result = num1/num2;
                printf("The quotient of two numbers are : %.2f", result);
            }else{
                printf("The division by zero is not possible...");
            }
        break;
    default:
            printf("Invalid operator! The division is not possible...");
    }
    return 0;
}