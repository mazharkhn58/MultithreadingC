#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 4
/*This file will pushed to github*/
void *dice_roller()
{
    int value = (rand() % 6) + 1;
    int *result = (int *)malloc(sizeof(int));
    *result = value;
    printf("value address = %p\n", result);
    return result;
}

int main(int argc, int* argv[])
{
    int *value;
    pthread_t th[SIZE];
    srand(time(NULL));
    for(int i=0; i<SIZE; i++)
    {
        if (pthread_create(&th[i], NULL, dice_roller, NULL) != 0)
        {
            return 1;
        }
    }
    for(int i=0; i<SIZE; i++)
    {
        if (pthread_join(th[i], (void**)&value) != 0)
        {
            return 2;
        }
        printf("In Main: value address = %p\n", value);
        printf("Returned Value = %d\n", *value);
        free(value);
    }
    
}
