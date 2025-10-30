#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int odd_count = 0, even_count = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    int good_pairs = odd_count * even_count;

    printf("%d\n", good_pairs);

    return 0;
}
