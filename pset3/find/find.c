
       
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "helpers.h"

// maximum amount of hay
const int MAX = 65536;

int main(int argc, string argv[])
{
    //proper arguments
    if (argc != 2)
    {
        return -1;
    }

    // remember needle
    int needle = atoi(argv[1]);

    // fill haystack
    int size;
    int haystack[MAX];
    for (size = 0; size < MAX; size++)
    {
        
        int straw = GetInt();
        if (straw == INT_MAX)
        {
            break;
        }
     
        //add hay to stack
        haystack[size] = straw;
    }
    printf("\n");

    //sort the haystack
    sort(haystack, size);

    //find needle in haystack
    if (search(needle, haystack, size))
    {
        printf("needle found in haystack\n");
        return 0;
    }
    else
    {
        printf("needle not found in haystack\n");
        return 1;
    }
}