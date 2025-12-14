#include<bits/stdc++.h>
using namespace std;
class Myqueue{
    public:
    list<int>mylist;
    void push(int val){
        mylist.push_back(val);
    }

    void pop(){
        mylist.pop_front();
    }

    int front(){
        return mylist.front();
    }

    int back(){
        return mylist.back();
    }

    int size(){
        return mylist.size();
    }

    bool is_empty(){
       if(mylist.empty()==true){
        return true;
       }else{
        return false;
       }
    }
    
};

int main()
{
    Myqueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        q.push(val);
    }

     while(q.is_empty()==false){
        cout<<q.front()<<endl;
        q.pop();
     }
    return 0;
}