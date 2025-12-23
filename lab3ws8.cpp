#include <stdio.h>

int main() {
    int h, m, s;
    int nextMin;
    scanf("%d:%d:%d", &h, &m, &s);
    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("Second:%d\n", s);
    scanf("%d", &nextMin);
    m = m + nextMin;
    h = h + (m / 60);
    m = m % 60;
    h = h % 24;
    printf("Hour:%d\n", h);
    printf("Minute:%d\n", m);
    printf("Second:%d\n", s);
    return 0;
}