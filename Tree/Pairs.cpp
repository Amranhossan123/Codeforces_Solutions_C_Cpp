#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int num;
    string name;
    Student(string name,int num){
        this->name=name;
        this->num=num;
    }
};

class Cmp{
    public:
    bool operator()(Student &l,Student &r){
        if(l.name > r.name){
            return true;
        } else if(l.name < r.name){
            return false;
        }else{
           return l.num < r.num;
        }
    }
};


int main()
{   priority_queue<Student,vector<Student>,Cmp>pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string name;
        int num;
        cin>>name>>num;
        Student s(name,num);
        pq.push(s);
    }

    while(!pq.empty()){
        cout<<pq.top().name<<" "<<pq.top().num<<endl;
        pq.pop();
    }

  
    return 0;
}
