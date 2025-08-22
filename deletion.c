#include <stdio.h>
int main() {
    int arr[20] = {10, 20, 30, 40, 50 };
    int n = 5, pos;
         
    printf("Enter position to delete : ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for(int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    printf("Array after deletion: ");

    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
