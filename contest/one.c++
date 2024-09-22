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
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int total = (v[0] += 3) * (v[1] += 2) * v[2];
        cout << total << endl;
    }

    return 0;
}