#include<bits/stdc++.h>
using namespace std;


void forward_print(list<int>anylist){
    cout<<"L -> ";
    for(int val :anylist){
        cout<<val<<" ";
    }
    cout<<endl;
}

void reverse_print(list<int>anylist){
    cout<<"R -> ";
    for(auto it=anylist.rbegin();it!=anylist.rend();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

void delete_list(list<int>&anylist,int val){
    auto it=anylist.begin();
    advance(it,val);
    anylist.erase(it);
}

int main()
{
    list<int>mylist;
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int idx,val;
        cin>>idx>>val;
        if(idx==0){
            mylist.push_front(val);
            forward_print(mylist);
            reverse_print(mylist);
        }
        else if(idx==1){
            mylist.push_back(val);
            forward_print(mylist);
            reverse_print(mylist);
        }else if(idx==2){
            if(val>=mylist.size()){
                forward_print(mylist);
                reverse_print(mylist);
            }else{
                delete_list(mylist,val);
                forward_print(mylist);
                reverse_print(mylist);
            }
        }
    }
    return 0;
}