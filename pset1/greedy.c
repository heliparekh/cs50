#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define QUARTER 25
#define DIME 10
#define NICKEL 5

int main(void)
{
    float dollar;
    int cent,quarter_c,nickel_c,dime_c,rem,coin;
    
    //getting amount in dollars
    do
    {
        printf("Amount in dollars:");
        dollar=GetFloat();
    }while(dollar<=0);
    
    //cents
     cent=(int)round(dollar*100);
    
    //number of quarters
    quarter_c=dollar/QUARTER;
    rem=cent%QUARTER;
    
    //number of dimes
    dime_c=rem/DIME;
    rem=rem%DIME;
    
    //number of nickels
    nickel_c=rem/NICKEL;
    rem=rem%NICKEL;
    
    //total coins
    coin=quarter_c+nickel_c+dime_c+rem;
    
    printf("Total coins:%d\n",coin);
    
    
    
}