#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) 
{
    int i,n;
    printf("Enter a string:");
    string str = GetString();
    printf("%c", toupper(str[0]));
   
   
    for( i = 1, n = strlen(str); i < n; i++) 
    {
       //check if loop encounters a space 
       
       
       if(str[i] == ' ' && str[i+1] != '\0')
       {
            printf("%c", toupper(str[i + 1]));
            i++;
       }
      
   }
   printf("\n");
}