#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        printf("%d, %d", xc, yc);
        bool flag = false;
        int i = 0;
        while (--k)
        {
            if (flag)
            {
                cout << xc + i << " " << yc + i << endl;
            }
            else
            {
                cout << xc - i << " " << yc - i << endl;
                flag != flag;
                i++;
            }
        }
        // cout << endl;
    }

    return 0;
}