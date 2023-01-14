#include <iostream>
using namespace std;

int fact(int n){
    
    if(n==0){
        return 1;
    }
    
    if(n==1){
        return 1;
    }
    
    return n * fact(n-1);
}

int powe(int n){
    if(n==0){
        return 1;
    }
    
    return 2 * powe(n-1);
}

void prid(int n){
    if(n==0){
    return;
    }
    
    cout<<n<<endl;
    
    prid(n-1);
}

void pria(int n){
    if(n==0){
    return;
    }
    
    pria(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter the number to find factorial"<<endl;
    cin>>n;
    
    cout<<fact(n)<<endl;
    
    int m;
    cout<<"Enter the number to find its power of two "<<endl;
    cin>>m;
    
    cout<<powe(m)<<endl;
    
    int o;
    cout<<"Enter the number to print from n to 1 "<<endl;
    cin>>o;
    
    prid(o);
    
    int p;
    cout<<"Enter the number to print from n to 1 "<<endl;
    cin>>p;
    
    pria(p);
    
    return 0;
}