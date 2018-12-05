#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[9] = {10,2,3,5,-9,-10,-20,0,15,9};
    int i, j, min;
    min=arr[0];
    for(i=0; i< 9; i++)
    {
        for(j=0; j<9-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                min= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=min;
            }
        }
    }
    for(i=0;i<9;i++)
    {
        printf("%d ", arr[i]);
    }
}

