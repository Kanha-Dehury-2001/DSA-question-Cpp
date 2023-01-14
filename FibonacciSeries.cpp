#include<iostream>
using namespace std;

int fiboSeries(int n){
    
    if(n==0){
        return 0;
    }

    if(n==1){
        return 1;
    }
     return fiboSeries(n-1)+fiboSeries(n-2);
}

int main(){

    int n;
    cout<<"Enter the place of which you want to find Fibonacchi Series"<<endl;
    cin>>n;

    cout<<"The Number is : "<<fiboSeries(n);


    return 0;
}