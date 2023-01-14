#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int> q;
     q.push(1);
     cout<<"front :"<<q.front()<<endl;

     q.push(2);
     
     
     q.push(3);

     q.pop();
    

    cout<<"front :"<<q.front()<<endl;
     cout<<"back :"<<q.back()<<endl;

    cout<<" Size : "<<q.size()<<endl;

     if(q.empty()){
        cout<<"Queue is empty : ";
     }
     else{
        cout<<"Queue is not empty";
     }
}
