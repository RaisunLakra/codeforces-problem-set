#include <iostream>
#include <string>

using namespace std;

char nextChar(char c)
{
    return (c == 'z') ? 'a' : (c + 1);
}

int main(int argc, char **argv)
{
    int t;
    std::cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int n = str.size();

        if (n == 1)
        {
            str.insert(0, 1, nextChar(str[0]));
            cout << str << endl;
            continue;
        }

        bool flag = false;
        for (int i = n - 2; i >= 0; i--)
        {
            if (str[i] == str[i + 1])
            {
                str.insert(i + 1, 1, nextChar(str[i]));
                flag = true;
                break;
            }
        }

        if (!flag)
            str.push_back(nextChar(str[n - 1]));

        cout << str << endl;
    }

    return 0;
}
