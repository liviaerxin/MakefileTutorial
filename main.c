#include <stdio.h>
#include "functions.h"
#include "hellofunc.h"
int main(){
    print_hello();
    printf("\n");
    printf("The factorial of 5 is %d\n", factorial(5));
    printf("The add of 5 + 3 is %d\n", add(5, 3));
    myPrintHelloMake();
    return 0;
}
