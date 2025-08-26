#include <stdio.h>

int main(){
    int a,temp;
    printf("Enter number of element = ");
    scanf("%d",&a);
    int arr[a];
    printf("Enter %d elements in array = ",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array = ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}