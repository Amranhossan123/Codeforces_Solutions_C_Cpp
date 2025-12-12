#include<bits/stdc++.h>
using namespace std;
void fun(int* &p ){
    int y=20;
    p=&y;

}
int main()
{
    int a=10;
    int* p=&a;
    fun(p);
    cout<<"main fun "<<*p<<endl;
    return 0;
}