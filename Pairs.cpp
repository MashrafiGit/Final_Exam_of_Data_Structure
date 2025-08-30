#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int roll;
};

class cmp
{
public:
    bool operator()(const Student &l, const Student &r)
    {
        if (l.name < r.name)
            return false;
        if (l.name > r.name)
            return true;
        return l.roll < r.roll;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    while (n--)
    {
        string name;
        int roll;
        cin >> name >> roll;

        pq.push({name, roll});
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }

    return 0;
}
