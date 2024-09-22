#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

int main(int argc, char **argv)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        string a, b;
        cin >> a >> b;

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            string s = a.substr(l - 1, r - l + 1);
            // cout << "substr s = " << s << endl;
            string t = b.substr(l - 1, r - l + 1);
            // cout << "substr t = " << t << endl;

            unordered_map<char, int> m;
            for (int i = 0; i < s.size(); i++)
            {
                m[s[i]]++;
            }

            int count = 0;
            for (int i = 0; i < s.length(); i++)
            {
                if (m[t[i]] == 1)
                {
                    m[t[i]]++;
                }
                else
                    count++;
            }

            cout << count << "\n";
        }
    }
}