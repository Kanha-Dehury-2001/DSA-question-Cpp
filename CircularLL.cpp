#include<iostream>
using namespace std;

class Kanha{
    public:
    int data;
    Kanha* next;

    Kanha(int d){
        this->data = d;
        this-> next = NULL;
    }

   
    ~Kanha(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"done"<<endl;

    }
};

void insertNode(Kanha* &tail,int value,int d){
    if (tail==NULL)
    {
        Kanha * temp = new Kanha(d);
        tail = temp;
        temp->next=temp;
        
    }
    else{
    Kanha * temp = tail;
    
    while(temp->data != value){
        temp=temp->next;
    }
    Kanha * NTA = new Kanha(d);
    NTA ->next=temp->next;
    temp->next=NTA;
     
    }
}
void print(Kanha* &tail){
    if(tail==NULL){
        cout<<"LL is empty";
        return;
    }
    Kanha* temp = tail;

    do{
        cout<<temp->data<<"   ";
        temp= temp->next;
    }
   while(temp!=tail);
    cout<<endl;
}

void remove(Kanha* &tail, int value){
    if(tail==NULL){
        cout<<"the list is empty"<<endl;
        return;
    }
    Kanha* temp = tail;
    Kanha* curr = tail->next;

    while(curr->data != value){
        temp=curr;
       curr=curr->next;
    } 
    temp->next=curr->next;
    if(curr==temp){
        tail==NULL;
    }
    else if(tail == curr){
        tail=temp;

    }
    
    curr->next=NULL;
    delete curr;
}

int main(){
    Kanha* tail = NULL;

    insertNode(tail,5,3);
    print(tail);

    insertNode(tail,3,6);
    print(tail);
    
    insertNode(tail,3,1);
    print(tail);

    insertNode(tail,6,9);
    print(tail);

    remove(tail,3);
    print(tail);

    
    return 0;
}