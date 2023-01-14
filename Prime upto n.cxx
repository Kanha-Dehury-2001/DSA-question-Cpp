#include <iostream>
using namespace std;

bool isPrime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

 int main() 
{
        int n;
        cin>>n;
        int i=3;
        
        while(i<n){
            if(isPrime(i)){
                cout<<i<<endl;
            }
            i++;
        }
	return 0;	
}