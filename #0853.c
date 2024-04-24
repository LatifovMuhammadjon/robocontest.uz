#include <stdio.h>

int main()
{
    int hh, mm, t, s;
    scanf("%d:%d", &hh, &mm);
    scanf("%d",&t);
    s = hh*60+mm+t;
    hh = s%1440/60;
    mm = s%60;
    printf("%02d:%02d", hh, mm);
    return 0;
}
