#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char number[1000001];

    scanf("%d", &n);

    scanf("%s", number);

    int digit_sum = 0;
    for (int i = 0; i < n; i++) {
        digit_sum += (number[i] - '0');
    }

    if (digit_sum % 3 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

