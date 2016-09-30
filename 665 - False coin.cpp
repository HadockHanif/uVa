#include<bits/stdc++.h>
using namespace std;

int arr[20000];
int main() {
    int m, ks = 1;
    cin>>m;
    while(m--) {
        memset(arr, 0, sizeof(arr));
        if (ks != 1) {
            cout<<"\n";
        }
        ks++;
        int n,k;
        cin>>n>>k;

        vector<int>v1, v2;
        for(int i = 0; i < k; i++) {
            v1.clear();
            v2.clear();
            int p;
            cin>>p;
            for(int x = 0; x<p;x++) {
                int a;
                cin>>a;
                v1.push_back(a);
            }
            for(int x = 0; x<p;x++) {
                int a;
                cin>>a;
                v2.push_back(a);
            }
            char c;
            cin>>c;
            // cout<<c<<endl;
            if (c == '<') {

            } else if (c == '>') {
                // for(int x = 0;x<v1.size();x++) {
                   //  int a = v1[x];
                    // arr[a] = 1;
                // }
            } else {
                for(int x = 0;x<v1.size();x++) {
                    int a = v1[x];
                    arr[a] = 1;
                }
                for(int x = 0;x<v2.size();x++) {
                    int a = v2[x];
                    arr[a] = 1;
                }
            }
        }
        int cnt = 0;
        int ans = 0;
        for(int i = 1; i<=n; i++) {
            if (arr[i] == 0) {
                ans = i;
                cnt++;
            }
        }
        if ( cnt == 1) {
            cout<<ans<<endl;
        } else {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
