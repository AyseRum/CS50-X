#include<stdio.h>
#include<cs50.h>
#include<ctype.h>

int main (void)

{
    //Local Declarations
    int h;
    //char a; 
    
    //Statements
    printf("Height: ");
    h = GetInt();
   
   
     
    
    while  (isalpha(h))
         {
         printf("Retry: ");
         h = GetInt();
         }
    while  (h<0 || h>23)
         {
         printf("Height: ");
         h = GetInt();
         }//while
    if (0<= h && h<=23)
         {
         for(int i = 1; i<= h ; i++)
            {
                for(int x = 0; x < h-i; x++)
                    printf(" ");
                for(int j = -1; j< i; j++)
                    printf("#");
                printf("\n");
            }
         }
   
     return 0;
}//main
