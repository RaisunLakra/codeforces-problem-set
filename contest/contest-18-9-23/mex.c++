#include<iostream>

using namespace std;

int main() {
    int t = 0;
    cin>>t;
    for(int i = 0; i < t; i++) {
        int n,k,x;
        cin>>n>>k>>x;
        if(k > n || (k < n && k > x)) {
            cout<<"-1";
        }
        else {
            int num = 0;
            int sum = 0;
            for(int i = 0; i < n; i++) {
                sum += num;
                if()
            }

            cout<<sum<<endl;
        }
    }
}