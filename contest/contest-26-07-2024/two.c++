#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> v(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                v[i][j] = c;
            }
        }

        vector<vector<char>> ans;
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
                cout << v[i][j];
            cout << endl;
        }
    }
}