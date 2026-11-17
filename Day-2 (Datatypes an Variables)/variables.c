/* datatypes (3): A data type tells the computer what kind of data you are putting in the box 
and how big the box needs to be. 
1) int = integer value = a = 20, -56;
2) float = decimal value = b = 45.67, 56.30, 0.56;
3) char = charecter = c = 'A' to 'Z' or 'a' to 'z';
4) double = large number of decimal value = d = 4567.6789432564556677898765432456789;
*/

// datatype formate specifiers: (1 byte = 8 bits)
/*
1) int = "%d" int = 2byte
2) float = "%f" or "%.2f" float = 4byte
3) char = "%c", string = "%s" char = 1byte
4) double = "%lf" or "%.2f" double = 8byte
*/

/* 1. Variables in C: A variable acts as a container for a value that can change while the program runs. 
Every variable must be declared with a specific data type before you use it.

## Rules of declaration of variables
    1) Variable name do not started with numbers.
    2) Variable doesn't contain any type of special symbols
    3) if i want separate variable name that time we use (_) symbol. (!not =, -, " ")
    4) Variable contain numbers also but in middle or end.
    5) Variable name contain camel case letter (eg. stdNameOfAiml)

**** variable declaration syntax = datatype variable_name = value; // variable assignment

e.g. int number; = T
int 2num; = F
float @name; = F
char std_name; = T
char emp-name; = F
int num2; = T
double std_1_per; = T
char studentRollNo; = T
*/

#include<stdio.h>

int main(){
    int num = 52;
    char stdName = 'T';
    float stdPer = 99.99;
    double area = 459.2569871135594;

    printf("Number: %d\n", num); // Number: 52
    printf("Student Name: %c\n", stdName); // Student Name: T
    printf("Student Percentages: %.2f\n", stdPer); //Student Percentages: 99.99
    printf("Area: %lf\n", area); // Area: 459.25

    int roll_no;
    printf("Enter Roll No:");
    scanf("%d", &roll_no);
    printf("Roll No: %d\n", roll_no);
    
return 0;

}
