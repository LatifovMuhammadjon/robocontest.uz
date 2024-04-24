#include <iostream>

int main()
{
    int a[6], s=0;
    for (int i = 0; i < 6; i++)
    {
        std::cin >> a[i];
        s += a[i];
    }
    if (s&1) {
        std::cout << "No";
        return 0;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            for (int k = j+1; k < 6; k++)
            {
                if (a[i]+a[j]+a[k]==s/2)
                {
                    std::cout<<"Yes";
                    return 0;
                }
            }
        }
    }
    std::cout << "No";
    return 0;
}
