#include <iostream>
using namespace std;
// Creating 
class Kanha{
    public:
    int data;
    Kanha* next;
// CONSTRUCTOR
    Kanha (int data){
        this -> data = data;
        this -> next = NULL;
       
    }
};

void insertAH(Kanha* & head,int d ){
    Kanha* temp= new Kanha(d);
    temp -> next= head;
    head = temp;
}

void insertAL(Kanha* &tail,int d){
    Kanha* temp = new Kanha(d);
    tail -> next = temp;
    tail=temp;
}

void insertAP(Kanha* &head,Kanha* &tail, int pos , int value){
    
    if(pos==1){
        insertAH(head,value);
        return;
    }
    Kanha* temp = head;
    int cnt=1;

    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next==NULL){
        insertAL(tail,value);
        return;

    }

    Kanha* NTA = new Kanha(value);
    NTA->next=temp->next;
    temp->next=NTA;
    

}

void remove(Kanha* &head,Kanha* &tail,int pos){
    Kanha* temp = head;
    if (pos==1){
        
        head = temp->next;
        temp->next=NULL;
        delete temp;
        return ;
    }
    int cnt=1;
    Kanha* previous;
    while(cnt<pos){
        previous = temp;
        temp=temp->next;
    cnt++;
    }
    previous -> next = temp->next;
    if(previous->next==NULL){
        tail=previous;
    }
    temp->next = NULL;
    delete temp;

}
void print(Kanha* &head ){
    
    Kanha* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;;
        temp = temp->next;
    }
}


int main(){
   Kanha* kanha1 = new Kanha(10);
   
    Kanha* head = kanha1;
    Kanha* tail = kanha1;

    insertAH(head,100);
    insertAH(head,1000);

    insertAL(tail,1);
    insertAL(tail,2);

    insertAP(head,tail,6,28);
    cout<<tail->data<<endl;    remove(head,tail,6);
    cout<<tail->data<<endl;
    remove(head,tail,5);
    cout<<tail->data<<endl;
    remove(head,tail,4);

    cout<<tail->data<<endl;
    print(head);
   
}
