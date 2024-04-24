#include <iostream>
#include <vector>
const int MOD = 1e9+7;
std::vector<int> v = {1};
int modpow(int a, int n) {
    if (n==0) return 1;
    long long u = modpow(a, n/2);
    u = u*u%MOD;
    if (n&1) u = u * a%MOD;
    return u;
}

void modfact() {
    for (int i = 1; i <= 1e5; i++)
    {
        v.push_back(1LL*v[i-1] * i%(MOD-1));
    }
}
int main()
{
    int t, min, m, result;
    std::cin >> t;
    int a[t], b[t], n[t];
    modfact();
    for (int i = 0; i < t; i++)
    {
        std::cin >> a[i] >> b[i] >> n[i];
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i]<b[i]) min = a[i];
        else min = b[i];
        result = modpow(n[i], v[min]);
        std::cout << result << "\n";
    }
    return 0;
}
