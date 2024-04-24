#include <iostream>

int main()
{
    int n, m;
    std::cin>> n >> m;
    int a[n][m], s[n][m];
    for(int i=0; i<2; i++) {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (i==0) s[j][k] = 0;
                std::cin >> a[j][k];
                s[j][k] += a[j][k];
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << s[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
}