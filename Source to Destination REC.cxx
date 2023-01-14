#include <iostream>
using namespace std;

void sotd(int des,int src){
    cout<<src<<"  "<<des<<endl;
    if (des==src){
        cout<<"Reached!!!!!!"<<endl;
        return ;
    }
    
    
    
    sotd(des,(src+1));
    
    
}

int main(){
    
    int n;
    cout<<"Enter the destination = ";
    cin>>n;
    cout<<endl;
    int src =1;
    
    sotd(n,src);
    return 0;
}