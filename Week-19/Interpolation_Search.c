#include <stdio.h>
int main() {
    int n, key, low, high, pos, i;
    printf("Enter number of elements (sorted & evenly spaced): ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter the sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value to search: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(low <= high && key >= arr[low] && key <= arr[high]) {
        pos = low + ( (double)(high - low) / (arr[high] - arr[low]) ) * (key - arr[low]);
        if(arr[pos] == key) {
            printf("find element: %d\n", pos + 1);
            return 0;
        }
        if(arr[pos] < key)
            low = pos + 1;
        else
            high = pos - 1;}
    printf("Element not found.\n");
    return 0;
}
