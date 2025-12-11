#include <stdio.h>
int main() {
    int n, pos;

    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    // shift left
    for(int i=pos-1; i<n-1; i++)
        arr[i] = arr[i+1];

    n--;

    printf("After deletion:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}
