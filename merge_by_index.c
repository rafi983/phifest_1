#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001], S2[1001];
    int start, end;

    scanf("%s", S1);

    scanf("%s", S2);

    scanf("%d %d", &start, &end);

    int len1 = strlen(S1);

    for (int i = start; i <= end; i++) {
        S1[len1++] = S2[i];
    }

    S1[len1] = '\0';

    printf("%s\n", S1);

    return 0;
}

