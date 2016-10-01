#include<bits/stdc++.h>
using namespace std;
#define READ(f)     freopen(f,"r",stdin)
#define WRITE(f)    freopen(f,"w",stdout)

map<char, char>mp;
map<string, int>ans;

void preCal()
{
    mp['A'] = mp['B'] = mp['C'] = '2';
    mp['D'] = mp['E'] = mp['F'] = '3';
    mp['G'] = mp['H'] = mp['I'] = '4';
    mp['J'] = mp['K'] = mp['L'] = '5';
    mp['M'] = mp['N'] = mp['O'] = '6';
    mp['P'] = mp['R'] = mp['S'] = '7';
    mp['T'] = mp['U'] = mp['V'] = '8';
    mp['W'] = mp['X'] = mp['Y'] = '9';
}

int main()
{
    preCal();
    // READ("input.txt");
    // WRITE("output.txt");
    string s;
    int t, ks = 1;
    cin>>t;
    while (t--)
    {
        if (ks != 1)
        {
            cout<<endl;
        }
        ks++;
        int n;
        cin>>n;
        vector<string>vec;
        while (n--)
        {
            cin>>s;
            ans.clear();
            for (int i = 0; i<s.length();)
            {
                if (s[i] == '-' || s[i] == 'Q' || s[i] == 'Z')
                {
                    s.erase(s.begin() + i);
                } else {
                    i++;
                }
            }
            vec.push_back(s);
        }
        for (int i = 0; i<vec.size(); i++) {
            string tmpS = vec[i];
            for (int j = 0; j<tmpS.length(); j++) {
                if (isalpha(tmpS[j])) {
                    vec[i][j] = mp[tmpS[j]];
                }
            }
            ans[vec[i]]++;
        }
        map<string, int>::iterator it;
        int cnt = 0;
        for (it = ans.begin(); it != ans.end(); it++)
        {
            // cout<<it->first<<it->second<<endl;
            if (it->second > 1)
            {
                cnt++;
            }
        }
        if (cnt == 0)
        {
            cout<<"No duplicates."<<endl;
        }
        else
        {
            for (it = ans.begin(); it != ans.end(); it++)
            {
                // cout<<it->first<<endl;
                if (it->second > 1)
                {
                    cout<<it->first.substr(0, 3)<<"-"<<it->first.substr(3, 8)<<" "<<it->second<<endl;
                }
            }
        }
    }
    // cout<<endl;
    return 0;
}
