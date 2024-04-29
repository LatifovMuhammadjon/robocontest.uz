#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    if (n*3>=k && k>=2) printf("YES");
    else printf("NO");
    return 0;
}