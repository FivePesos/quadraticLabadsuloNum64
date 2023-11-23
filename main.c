#include <stdio.h>
#include <math.h>

void userInput(double* a, double* b, double* c);
double squared(double num1, double num2);
void output(double a, double b, double c);

int main()
{
    double valueA, valueB, valueC;

    userInput(&valueA, &valueB, &valueC);
    output(valueA, valueB, valueC);

    return 0;
}

void userInput(double* a, double* b, double* c){
    printf("Enter the value of a: ");
    scanf("%lf", a);
    printf("Enter the value of b: ");
    scanf("%lf", b);
    printf("Enter the value of c: ");
    scanf("%lf", c);
}

double squared(double num1, double num2){
    return num1 * num2;
}

void output(double a, double b, double c){
    double root;
    double discriminate;
    double x1;
    double x2;

    if(a == 0 && b == 0){
        //If both a and b == 0, There is no solution :)
        printf("\nThere is no solution.");
    }else if(a == 0){
        //If a is zero, there is only one root;
        root = -c / b;
        printf("\nThere is only one root: %.2lf", root);
    }
    else{
        discriminate = squared(b,b) - 4 * a * c;
        if(discriminate < 0){
            //If the discriminate is negative, there are no real roots.
            printf("\nThere are no real roots.");
        }else{
            x1 = (-b + sqrt(discriminate)) / (2*a);
            x2 = (-b - sqrt(discriminate)) / (2*a);

            //For all other combinations, there are two roots.

            printf("\nThere are two roots see below.\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
    }
}

