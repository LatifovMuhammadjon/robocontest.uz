// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     long long counter = 0;
//     vector<bool> a = {false, false};
//     for (int i = 1; i < n; i++)
//     {
//         vector<bool> v = {false};
//         for (int j = 0; j < i; j++)
//         {
//             v.push_back(!(a[j]^a[j+1]));
//             counter += !(a[j]^a[j+1]);
//         }
//         v.push_back(false);
//         a = v;
//     }
//     cout << counter;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long counter = 0;
    bool a[] = {false, false};

    for (int i = 1; i < n; i++) {
        bool v[i + 2]; // Preallocate size

        for (int j = 0; j < i; j++) {
            v[j + 1] = a[j] == a[j + 1]; // Simplify XOR logic
            counter += v[j + 1]; // Update counter directly from v
        }

        bool a[i+2];
        a = move(v); // Move v to a for the next iteration
    }

    cout << counter;
    return 0;
}
