#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMIT 65536

int main(int argc, char *argv[])
{
    int i;
    // If there are not two or three arguments,
    // display the use of and exit the program.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: %s n [s]\n", argv[0]);
        return 1;
    }

    // convert ascii value to integer value
    int n = atoi(argv[1]);

    // if there are three arguments, convert the third
    // (seedrand) to an integer, else have the srand be
    // the current time.
    if (argc == 3)
        srand((unsigned int) atoi(argv[2]));
    else
        srand((unsigned int) time(NULL));

    // generate random numbers n amount of times
    for (i = 0; i < n; i++)
        printf("%d\n", rand() % LIMIT);

    // that's all folks
    return 0;
}