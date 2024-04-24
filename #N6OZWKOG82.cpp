#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> v;
    int count_a = 0, count_b = 0;
    for(int i = 0; i < n; i++) {
        if(text[i] == 'a') {
            count_a++;

            if(count_b < 0) {
                v.push_back(count_b);
                count_b = 0;
            }
        }
        else {
            count_b--;

            if(count_a > 0) {
                v.push_back(count_a);
                count_a = 0;
            }
        }
    }
    if (count_a > 0) {
        v.push_back(count_a);
    }
    int length = v.size();
    int s[length];
    for (int i = 0; i < length; i++)
    {
        if (i==0) s[0] = v[0];
        else s[i] = s[i-1] + v[i];
    }
    
    int maks = 0, sum = 0;
    
    for (int i = (length+1)%2; i < length-2; i++) {
        if (i==(length+1)%2) {
                sum = v[i];
            }
        if (sum+v[i+1]>=0 && v[i+1]+v[i+2]>=0) {
            sum += v[i+2] + v[i+1];
            maks = maks+sum - 2* v[i+1];
        } else {
            sum = v[i+2];
            maks = max(maks, sum);
        }
    }
    cout << maks;
    return 0;
}