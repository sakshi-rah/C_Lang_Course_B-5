// Unary Operator:- increment and decrement operators(++, --) inc by 1 or dec by 1
/* pre increment (++x) // write ++ operator before variable(x)
post increment (x++) // write ++ operator after variable(x)
pre decrement (--x) // write -- operator before variable(x)
post decrement(x--) // write -- operator after variable(x)

pre inc => 1st perform operation then print inc or dec value (++x: 12 ) //x=11
post inc => print 1st given value then perform operation x=11, (x++: 11) memory= 12, x=12
*/

#include<stdio.h>

int main()
{

    int x = 5;
    printf("x: %d\n", x); //x:5
    //pre increament and decreament operators
    printf("++x: %d\n", ++x); // ++x:6
    printf("--x: %d\n", --x); // --x:5

    int y = 10;
    printf("++y: %d\n", ++y); // ++y:11
    printf("--y: %d\n", --y); // --y:10

    //post increament and decreament operators
    printf("x: %d\n", x); //x:5
    printf("x++: %d\n", x++); // x++:5 memory x++:6
    printf("x: %d\n", x); //x:6
    printf("x--: %d\n", x--); // x--:6 memory x--:5

    int a = 7;
    printf("a++: %d\n", a++); // a++:7 memory a++: 8
    printf("a: %d\n", a); // a:8
    printf("a--: %d\n", a--); //a--:8 memory a--:7
    printf("a: %d\n", a); // a:7

    //another example of post inc and dec operators
    int s = 1;
    printf("s: %d\n", s); // s:1
    printf("s++: %d\n", s++); // s++:1 memory s++:2
    printf("s: %d\n", s); // s:2
    printf("++s: %d\n", ++s); // ++s:3
    printf("s--: %d\n", s--); // s--:3 memory s--: 2
    printf("s: %d\n", s); //s:2
    printf("--s: %d\n", --s); // --s:1

    return 0;
}