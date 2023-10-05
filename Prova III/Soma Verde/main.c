#include <stdio.h>
#include <stdlib.h>


int countRectangles(int arr[], int n, int k) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == k) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = countRectangles(arr, n, k);
    printf("%d\n", result);

    return 0;
}
