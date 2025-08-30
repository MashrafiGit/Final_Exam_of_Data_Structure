#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;

    int n;
    cin >> n;

    while (n--)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            int v;
            cin >> v;
            pq.push(v);
            cout << pq.top() << endl;
        }

        else if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (x == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top() << endl;
            }
        }
    }

    return 0;
}