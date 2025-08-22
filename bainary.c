#include<stdio.h>

int main( ){
    int a,b,mid,right,left,found=0;
    printf("Enter number of elemnt = ");
    scanf("%d",&a);
    int arr[a];
    printf("\n enter the array = ");
    for (int  i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n Enter find the value want = ");
    scanf("%d", &b);
    left = 0;
    right = a-1;
    while (left<=right)
    {
        mid = (left+right)/2;
        if (arr[mid] == b)
        {
            found = 1;
            break;
        }
        if (arr[mid]<b)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    if (found)
    {
        printf("element %d found at position %d \n", found ,mid+1);
    }
    else{
        printf("%d is not present in array", b);
    }
    return 0;
}
