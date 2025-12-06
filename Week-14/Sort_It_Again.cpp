#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int cls;
    char sec;
    int id;
    double math;
    double english;
};
bool cmp(Student l,Student M){
    if(l.english>M.english){
        return true;
    }else if(l.english==M.english){
        if(l.math>M.math){
            return true;
        }else if(l.math==M.math){
            return l.id<M.id;
        } else{
            return false;
        }
    }
    else{
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec >>
            a[i].id >> a[i].math >> a[i].english;
    } 
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].sec<<" "
        <<a[i].id<<" "<<a[i].math<<" "<<a[i].english<<endl;
    }
    
    return 0;
}