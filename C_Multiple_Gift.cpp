#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll x, y;
    cin >> x >> y;

    ll max_length = 0;

    while (x <= y) {
        x *= 2;
        max_length++;
    }

    cout << max_length << endl;

    return 0;
}
