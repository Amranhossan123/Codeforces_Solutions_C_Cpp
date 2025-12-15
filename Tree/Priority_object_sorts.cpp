#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int marks;
    int roll;
    Student(string name,int marks,int roll){
        this->name=name;    
        this->marks=marks;
        this->roll=roll;
    }
};

class Cmp{
    public:
    bool operator()(Student l,Student r){
        if(l.marks > r.marks) return true;
        else if(l.marks < r.marks) return false; 
        else return l.roll > r.roll;
            
        
    }
};

int main()
{
    priority_queue<Student,vector<Student>,Cmp> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){ 
        string name;
        int marks,roll;
        cin>>name>>marks>>roll;
        Student obj(name,marks,roll);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }
 
    
    return 0;
}