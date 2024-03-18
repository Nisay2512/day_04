#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    map<string, int> ma;

    while (t--) {
        int n;
        cin >> n;
        
        vector<string> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ma[a[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            ma[b[i]]++;
        }

        for (int i = 0; i < n; i++) {
            cin >> c[i];
            ma[c[i]]++;
        }

        int countA = 0, countB = 0, countC = 0;

        for (auto& x : ma) {
            string key = x.first;
            int frq = x.second;

            if(frq==2){
                auto it = find(a.begin(), a.end(), key);
                if(it != a.end()){
                    countA++;
                }

                it = find(b.begin(), b.end(), key);
                if(it != b.end()){
                    countB++;
                }

                it = find(c.begin(), c.end(), key);
                if(it != c.end()){
                    countC++;
                }
            }

            if(frq==1){
                auto it = find(a.begin(), a.end(), key);
                if(it != a.end()){
                    countA += 3;
                }

                it = find(b.begin(), b.end(), key);
                if(it != b.end()){
                    countB += 3;
                }

                it = find(c.begin(), c.end(), key);
                if(it != c.end()){
                    countC += 3;
                }
            }

        }
        cout << countA << " " << countB << " " << countC<<endl;

        ma.clear();
    }

    

    return 0;
}