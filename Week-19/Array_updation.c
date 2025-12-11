#include <stdio.h>
int main() {
    int n, pos, value;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];

    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position to update: ");
    scanf("%d", &pos);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[pos-1] = value;
    printf("After updation:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}
