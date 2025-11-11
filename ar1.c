#include <stdio.h>

int main()
{
    int k=3;
    

     int n, i, j, key;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 printf("Enter size of rotetion k: ");
    scanf("%d", &k);

     k = k % n;

        int temp[n];
        for (int i = 0; i < n; i++) {
            temp[(i + k) % n] = arr[i];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    printf("Roteted array: ");
    for (int i = 0; i < 7; i++)
        printf("%d ", arr[i]);

    return 0;
}
