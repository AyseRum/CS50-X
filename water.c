#include<stdio.h>
#include<cs50.h>
int main (void)

{
    //Local Declarations
    int n;
    int b;
    
    //Statements
    printf("Minutes: ");
    n = GetInt();
    
    b= n * 12;
    printf("Bottles: %d\n", b);
    return 0;
}//main
