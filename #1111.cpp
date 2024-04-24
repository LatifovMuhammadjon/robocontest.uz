#include <iostream>
#include <vector>
long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}
int main()
{
    long long n, m;
    std::vector<std::pair<int, int>> v;
    std::cin >> n >> m;
    long long k = gcd(n, m);
    int p = 1, counter;
    for(int i = 2; 1LL*i*i<=k; i++) {
        counter = 0;
        while (k%i==0)
        {
            k /= i;
            counter++;
        }
        if (counter>0) v.push_back({i, counter});
        
    }
    if (k>1) v.push_back({k, 1});
    for (int i = 0; i < v.size(); i++)
    {
        p *= v[i].second+1;
    }
    std::cout << p;
    return 0;
}
