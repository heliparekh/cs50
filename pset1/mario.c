#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height,rows,space,pattern;
   
   //taking height as an input
   do
   {
        printf("height of the pyramid:");
        height=GetInt();
   }while(height<0 || height>23);
    
    
    //creating number of rows=heights
    for(rows=1;rows<=height;rows++)
    {
        for(space=1;space<=height-rows;space++)
            printf(" ");
        for(pattern=1;pattern<=rows+1;pattern++)
            printf("#");
        printf("\n");
    }
}