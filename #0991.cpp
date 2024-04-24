#include <iostream>

int main()
{
    std::string s;
    int sum=0;
    std::cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i&1) sum -= s[i] - '0';
        else sum += s[i] - '0';
    }
    if (sum==0) std::cout << "YES"; 
    else std::cout << "No";
    return 0;
}