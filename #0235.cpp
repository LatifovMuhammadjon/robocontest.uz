#include <iostream>

int main() {
    short n, m, a, b;
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cin >> n >> m >> a >> b;
    if ((1LL*n*n+1LL*m*m)*(n+m)*(n+m)<=1LL*a*a*(n-m)*(n-m)+1LL*b*b*(n+m)*(n+m) ||
        (1LL*n*n+1LL*m*m)*(n+m)*(n+m)<=1LL*b*b*(n-m)*(n-m)+1LL*a*a*(n+m)*(n+m)
    ) std::cout << a*b-n*m;
    else std::cout << a*b;
    return 0;
}