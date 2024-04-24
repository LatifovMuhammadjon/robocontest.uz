#include <iostream>
int main()
{
    int l, r, mod, k, counter=0;
    bool res;
    std::cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        k = i;
        res = true;
        while (k>0) {
            mod = k%10;
            if(mod==0) res=false;
            else if(i%mod) {
                res = false;
            }
            k /= 10;
        }
        if (res) counter++;
    }
    std::cout << counter;
    return 0;
}
