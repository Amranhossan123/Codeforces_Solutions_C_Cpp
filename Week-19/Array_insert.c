#include <stdio.h>
int main() {
    int n, pos, value;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to insert: ");
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &value);

    // shift right
    for(int i=n; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[pos-1] = value;
    n++;
    printf("After insertion:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}
