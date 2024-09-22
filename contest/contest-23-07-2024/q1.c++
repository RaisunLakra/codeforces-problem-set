#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << (min(2 * n, k)) / 2 << endl;
        }
        else
        {
            cout << (min(2 * n - 1, k)) / 2 << endl;
        }
    }
    return 0;
}