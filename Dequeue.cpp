#include<iostream>
#include<queue>
using namespace std;

int main(){
    deque<int> d;

    d.push_back(10);
    d.push_front(12);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_front();
    //d.pop_front();

    if(d.empty()){
        cout<<"Empty"<<endl;
        
    }
    else {
        cout<<"Is not empty "<<endl;
    }
}
