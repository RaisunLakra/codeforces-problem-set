#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        string wins = "Bob";
        while (a.size() > 1)
        {
            if (b[0] == a[0])
            {
                a.erase(a.begin());
                b.erase(b.begin());
            }
            else if (b[b.size() - 1] == a[0])
            {
                a.erase(a.begin());
                b.pop_back();
            }
            else if (b[0] == a[a.size() - 1])
            {
                a.pop_back();
                b.erase(b.begin());
            }
            else if (b[b.size() - 1] == a[a.size() - 1])
            {
                a.pop_back();
                b.pop_back();
            }
            else
            {
                wins = "Alice";
                break;
            }
        }
        cout << wins << "\n";
    }

    return 0;
}