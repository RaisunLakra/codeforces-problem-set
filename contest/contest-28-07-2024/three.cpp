#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            sum += v[i];
        }

        if (n == 0)
        {
            cout << "-1" << endl;
            continue;
        }

        int avg = sum / n;
        int op = 0;
        vector<int> ans;

        while (true)
        {
            if (all_of(v.begin(), v.end(), [](int x)
                       { return x == 0; })) // Check if all elements are zero
            {
                cout << op << endl;
                for (int i = 0; i < ans.size(); i++)
                {
                    cout << ans[i] << " ";
                }
                cout << endl;
                break;
            }
            if (op > 40)
            {
                cout << "-1" << endl;
                break;
            }
            op++;
            ans.push_back(avg);
            int s = 0;
            for (int i = 0; i < v.size(); i++)
            {
                v[i] = abs(v[i] - avg);
                s += v[i];
            }
            avg = s / n;
        }
    }

    return 0;
}
