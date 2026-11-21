// Operators in C are special symbols that tell the compiler to perform specific mathematical,
// relational, or logical operations on variables and values.[a+b; a & b is Operand and + is Operator]
//  1. Arithmetic operators (+,-,*,/,%) = binary operators = 2 operands
// ** 2. Increment Decrement Operators(++,--) = unary operators = 1 operand
//  3. Assignment operators (=,+=,-=,*=,/=,%=)= binary operators = 2 operands
//  4. Relational Operators (<,<=,>,>=,==,!=)= binary operators = 2 operands
//  5. Logical operators (&&=and,||=or,!=not)= binary operators = 2 operands

// Aritmetic Operators Program:- (+, -, *, /, %(mod)) => mod = remainder

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Value of a and b: ");
    scanf("%d%d", &a, &b);
    //Addition:
    // int sum = a + b; // 5+2
    // printf("Addition: %d\n", sum); // Addition: 7
    printf("Addition: %d\n", a+b); // Addition: 7

    //Substraction:
    printf("Substraction: %d\n", a-b); // Substraction: 3

    //Multification:
    printf("Multification of %d and %d: %d\n", a, b, a*b); // Multification of 5 and 2: 10

    //Modulus:
    printf("Modulus: %d\n", a%b); // Modulus: 1

    //Division:
    int c, d;
    printf("Enter C & D Value: ");
    scanf("%d%d", &c, &d);
    //type casting (int => float => (type))
    float div = (float)c/d;
    printf("Division: %.2f\n", div); // Division: 2

    //Revision Code(21-11-26)
    int x = 20, y = 3;
    printf("Sum of X & Y: %d\n", x+y);
    printf("Sum of X & Y: %d\n", x-y);
    printf("Sum of X & Y: %d\n", x*y);
    printf("Sum of X & Y: %d\n", x%y);
    float division = (float)x/y;
    printf("div of x & y: %.2f\n", division);

    return 0;
}
