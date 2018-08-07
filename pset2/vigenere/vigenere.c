
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

char caesar(char input, int key);

int main(int argc, string argv[]) 
{

    bool success= false;
    string keyword = "", text = "";
    int text_length,i,keylength = 0,key_count = 0;


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
            int length = strlen(argv[1]);
            for(i = 0; i < length; i++)
            {
                if(!isalpha(argv[1][i]))
                {
                    // We accept only letters as input. 
                    printf("Your input contains illegal characters.\n");
                    return 1;
                }
                else
                {
                    
                    success = true;
                    keyword = argv[1];
                }
            }
        }
    } while(!success);
    
    // We check for the length of the keyword and define an array with that length.
    keylength = strlen(keyword);
    int keycodes[keylength];

    // The letters in the keyword array should be converted to number
    for(i = 0; i < keylength;i++)
    {
        keycodes[i] = tolower(keyword[i]) - 97;
    }

    // Read in user text and calculate its length.
    printf("Enter text to be encrypted:");
    text = GetString();
    text_length = strlen(text);

    for (i = 0; i < text_length; i++)
    {
        // If input at given position is not letter, just mirror it.
        if(!isalpha(text[i]))
        {
            printf("%c", text[i]);
        }
        // Process input.
        else
        {
            printf("%c", caesar(text[i], keycodes[key_count]));

            // Increase the position counter for the keycode array.  
            if(key_count < keylength - 1)
            {
                key_count++;
            }
            else
            {
                key_count = 0;
            }
        }
    }

   
    printf("\n");
}


char caesar(char input, int key)
{
    if(islower(input))
    {
        return ((((input-97)+key)%26)+97);
    }
    else
    {
        return ((((input-65)  +key)%26)+65);
    }
}

   
