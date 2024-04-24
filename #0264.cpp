#include <iostream>

int main()
{
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    
    int right=2147483647;
    int left=~right;
    int mid;
    char x;
    while (left<=right) {
        mid = (left+right)/2;
        std::cout << mid << std::endl;
        std::cin >> x;
        if (x=='=') {
            std::cout << mid << std::endl;
            break;
        } else if (x=='>') {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    };
    return 0;
}
