
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[]) 
{

    bool success= false;
    string text = "";
    int text_length,i,key=0;


    do
    {
        // The number of command line arguments  were incorrect. 
        if(argc != 2)
        {
            printf("You didn't enter the correct number of keywords.\n");
            return 1;
        }
        else
        {
        
                    key=atoi(argv[1]);
                    success = true;
            
        }
    } while(!success);
    
    

    // Read in user text and calculate its length.
    printf("Enter text to be encrypted:");
    text = GetString();
    text_length = strlen(text);

    for ( i = 0; i < text_length; i++)
    {
        // If input at given position is not letter, just mirror it.
        if(!isalpha(text[i]))
        {
            printf("%c", text[i]);
        }
        // Process input.
        else
        {
            if(islower(text[i]))
            {
                printf("%c",((((text[i]-97)+key)%26)+97));
            }
            else
            {
                printf("%c",((((text[i]-65)+key)%26)+65));
            }
        }
        
    }
    printf("\n");
}



   
