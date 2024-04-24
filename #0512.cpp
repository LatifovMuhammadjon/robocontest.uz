#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int n, k, m, counter=0;
    std::cin >> n >> k;
    std::vector<int> v;
    for (int i = 0; i < n; i++)
    {
        std::cin >> m;
        v.push_back(m);
    }
    std::sort(v.rbegin(), v.rend());
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]>0 && v[i]>=v[k-1]) 
            counter++; 
    }
    std::cout << counter;
    return 0;
}
