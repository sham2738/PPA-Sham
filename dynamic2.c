#include<stdio.h>
#include<stdlib.h>  //for malloc, calloc, realloc and free

int main()
{
    int Arr[5];     //static memory allocation
    int size = 0;
    int *ptr = NULL;

    printf("Enter number of elements: \n");
    scanf("%d",&size);

    ptr = (int *) calloc(size , sizeof(int));

    // Use the memory

    free(ptr);

    return 0;
}

