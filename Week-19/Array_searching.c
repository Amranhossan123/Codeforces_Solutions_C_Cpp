#include <stdio.h>
int main() {
    int n, value, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter elements:\n");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to search: ");
    scanf("%d", &value);

    for(int i=0; i<n; i++) {
        if(arr[i] == value) {
            printf("Found at position %d\n", i+1);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Not found\n");
}
