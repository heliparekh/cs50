#include <cs50.h>


bool search(int value, int values[], int n)
{
    int left = 0;
    int right = n - 1;
    int middle;
    // Binary search algorithm
    while (left <= right)
    {
        // set middle index
        middle = (left+right)/2;
        // if middle value equal value searched, return true
        if (values[middle] == value)
        {
            return true;
        }
        // if middle value more than value searched , search on left part
        else if (values[middle] > value)
        {
            right = middle - 1;
        }
        // if middle value more than value searched, search on right part
        else
        {
            left = middle + 1;
        }
        
    }
    // if value is never found, return false
    return false;

}


void sort(int values[], int n)
{
    int min,temp,i,j;
    // selection sort 
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j ;
            }
        }
        temp = values[i];
        values[i] = values[min];
        values[min] = temp;
    }
    return;
}
