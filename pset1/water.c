#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int minutes;
    
    //taking input of minutes
    do
    {
        printf("Minutes of your shower:");
        minutes=GetInt();
    }while(minutes<0);
    
    //total water consumption is equivalent to (12 bottles per minute)
    printf("The water consumption is in bottles%i\n",minutes*12);
}