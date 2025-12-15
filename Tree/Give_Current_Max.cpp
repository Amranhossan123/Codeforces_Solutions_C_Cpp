#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks){
        this->name=name;
        this->roll=roll;
        this->marks=marks;
    }

};
class Cmp{
    public:
    bool operator()(Student &l,Student &r){
    if(l.marks < r.marks) return true;
    if(l.marks > r.marks ) return false;
    return l.roll > r.roll;
    }

};

int main()
{
    int n;
    cin>>n;
    priority_queue<Student,vector<Student>,Cmp>pq;
    for(int i=0;i<n;i++){
        string name;
        int roll,marks;
        cin>>name>>roll>>marks;
        Student s(name,roll,marks);
        pq.push(s);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int user;
        cin>>user;
        if(user==0){
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            pq.push(Student(name,roll,marks));
            cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        }
        else if(user==1){
            if(!pq.empty()){
                cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
            }
        }
        else if(user==2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
                }else{
                    cout<<"Empty"<<endl;
                }
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}