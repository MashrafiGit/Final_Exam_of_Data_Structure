#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        map<string, int> mp;
        stringstream ss(s);
        string word;

        string mxWord = "";
        int mx = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > mx)
            {
                mx = mp[word];
                mxWord = word;
            }
        }

        cout << mxWord << " " << mx << endl;
    }

    return 0;
}
