#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[n - i - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}