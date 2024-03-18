#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        map<string, int> ma;
        set<string> setA, setB, setC;

        
        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            ma[x]++;
            setA.insert(x);
        }

        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            ma[x]++;
            setB.insert(x);
        }

        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            ma[x]++;
            setC.insert(x);
        }

        
        int countA = 0, countB = 0, countC = 0;
        for (auto& x : ma) {
            string key = x.first;
            int frq = x.second;

            if (frq == 2) {
                if (setA.count(key)) countA++;
                if (setB.count(key)) countB++;
                if (setC.count(key)) countC++;
            }

            if (frq == 1) {
                if (setA.count(key)) countA += 3;
                if (setB.count(key)) countB += 3;
                if (setC.count(key)) countC += 3;
            }
        }

        cout << countA << " " << countB << " " << countC << endl;
    }

    return 0;
}
