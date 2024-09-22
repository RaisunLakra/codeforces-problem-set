#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v[i] = temp;
            if (i % 2 == 0)
                mx = max(mx, temp);
        }

        cout << mx << endl;
    }
}