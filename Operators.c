#include <stdio.h>
int main(){
    int b = 12, d = 10, e = 20;
    int result;
    float c = 23.50;
    
     printf("________________ arithmetic operators_________________\n");
    //addition operations
    printf("the TestNumber = %d \n", b);
    printf("longNumber = %f \t", c);
    printf("output = %f \n", b+c);
    
    printf("________________ relational operators_________________\n");
    //increment and decrement operations
    //printf("d++ = %d \t", d++);
    printf("++d = %d \n", ++d);
    printf("e-- = %d \n", e++);
    printf("________________ relational operators_________________\n");

    //relational Operators in C
    printf("%d == %d is %d \n", b,d, b==d);
    printf("%d <= %d is %d \n", b,d, b<=d);
    printf("%d >= %d is %d \n", b,d, b>=d);
    printf("%d != %d is %d \n", b,d, b!=d);
    printf("%d > %d is %d \n", b,d, b>d);
    printf("%d < %d is %d \n", b,d, b<d);

    printf("________________ logical operators___b,d,e______________\n");
    result = (b==d) && (d>e);
    printf("(b == d) && (d>e) is %d \n", result);
    result = (b==d) || (d>e);
    printf("(b == d) || (d>e) is %d \n", result);
    result = !(b==d);
    printf("!(b == d) is %d \n", result);
    result = (b!=d);
    printf("(!b == d) is %d \n", result);

    printf("________________ size of operators_________________\n");
    int x;
    float y;
    double z;
    printf("the size of x = %d: \n", sizeof(x));
    printf("the size of y = %f: \n", sizeof(y));
    printf("the size of z = %lu : \n",sizeof(z));


    return 0;

}