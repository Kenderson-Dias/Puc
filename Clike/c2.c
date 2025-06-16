#include <stdio.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    char s[1000];
    int pos = 0;

    for (int i = a; i <= b; i++) {
        pos += sprintf(s + pos, "%d", i);
    }

    for (int i = 0; i < pos; i++) {
        putchar(s[i]);
    }

    for (int i = pos - 1; i >= 0; i--) {
        putchar(s[i]);
    }

    return 0;
}