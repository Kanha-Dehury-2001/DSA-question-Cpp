#include <iostream>
#include <stack>
using namespace std;

class TwoStack {

public:
    int* a;
    int top1;
    int top2;
    int size;
    // Initialize TwoStack.
    TwoStack(int s) {
        a = new int[s];
        this->size = s;
        top1 = -1;
        top2 = s-1;
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top1+1<top2){
            top1++;
            a[top1]=num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top1<top2-1){
            top2 --;
            a[top2]=num;
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1>=0){
            return a[top1--];
        }
        else return -1;
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2+1<size){
            return a[top2++];
        }
        else return -1;
    }
};

class Stack
{
    public:
    int size ;
    int top;
    int* arr;


    Stack(int s){
        arr = new int(s) ;
        this->size=s;
        top = -1;
    }

    void push(int d){
        if(top<size-1){
        top++;
        arr[top]=d;
        }
        else{
            cout<<"Stack Overflow";
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow";
        }
        
    }

    int valueAt(){
        if(top>=0){
        return arr[top];
        }
        else return -1;
    }

    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    TwoStack sk(5);

    sk.push1(6);
    sk.push2(3);

    cout<<sk.pop1();
    cout<<endl;
    cout<<sk.pop2();
    cout<<endl;
    cout<<sk.pop2();
    cout<<endl;
    cout<<sk.pop1();








    /*stack<int> s;

    s.push(2);
    s.push(3);

    
    
    cout << "Printing top element : " << s.top();

    s.pop();

    cout << "Printing top element : " << s.top();

    s.pop();

    if (s.empty())
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "stack is not empty";
    }*/

    /*Stack st(5);

    cout<<st.valueAt();
    cout<<endl;
    st.push(2);
    cout<<st.valueAt();
    cout<<endl;
    st.push(3);
    cout<<st.valueAt();
    cout<<endl;
    st.pop();
    cout<<st.valueAt();
    cout<<endl;
    
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(12);
    st.push(1212);
     if (st.isEmpty())
    {
        cout << "stack is empty";
    }
    else
    {
        cout << "stack is not empty";
        
    }
    cout<<st.valueAt();
    cout<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
*/

}