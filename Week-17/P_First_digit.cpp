#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int digit = x / 1000;
    if (digit % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}