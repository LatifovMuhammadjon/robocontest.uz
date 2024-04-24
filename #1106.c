#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long n, m;
    scanf("%d %d", &n, &m);
    long long mod = (n*abs(m)/m)%abs(m);
    long long div = (n-mod)/m;
    if (mod) {
        printf("%d", mod);
        if (div) {
            printf("%d+%d/%d", div, mod, abs(m));
        } else {
            printf("%d/%d", mod, abs(m));
        }
    } else {
        printf("%d", div);
    }
    return 0;
}
