#include <iostream>
#include <map>
int main()
{
    int n, m, k;
    std::cin >> n;
    std::map<std::string, int> dict;
    std::string s;
    for (int i = 0; i < n; i++)
    {
        std::cin >> s >> k;
        if (dict[s]) dict[s] += k;
        else dict[s] = k;
    }
    std::cin >> m;
    std::string a[m];
    for (int i = 0; i < m; i++)
    {
        std::cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        std::cout << a[i] << " " << dict[a[i]] << std::endl;
    }
    return 0;
}
