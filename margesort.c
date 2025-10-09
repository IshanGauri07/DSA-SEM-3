#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r) {
    if (l < r) {
        int mid = (l + r - 1) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main() {
    int a;
    printf("Enter number of elements = ");
    scanf("%d", &a);

    int arr[a];
    printf("Enter %d elements:\n", a);
    for (int i = 0; i < a; i++)
        scanf("%d", &arr[i]);

    mergesort(arr, 0, a - 1);

    printf("Sorted array = ");
    for (int i = 0; i < a; i++)
        printf("%d ", arr[i]);

    return 0;
}