#include<iostream>
using namespace std;

class Kanha{
    public:
    int data;
    Kanha*next;
    Kanha*prev;

    Kanha(int d){
        this -> data = d;
        this -> next= NULL;
        this -> prev=NULL;
    }
    ~Kanha(){
        int val= this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
    }

};

void insertAH(Kanha* &head,Kanha* &tail,int d){
    if(tail==NULL){
        Kanha * temp = new Kanha(d);
        head=temp;
        tail=temp;
    }
    else{
    Kanha * temp = new Kanha(d);
    temp->next = head;
    head-> prev = temp;
    head = temp;
    }
}
void print(Kanha* &head){
    Kanha* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAL(Kanha* &head,Kanha* &tail,int d){
   if(head==NULL){
    Kanha * temp = new Kanha(d);
    head= temp;
    tail= temp;
   }
   else{
    Kanha* temp = new Kanha(d);
    tail->next = temp;
    temp->prev  = tail;
    tail = temp;
    }
   }

void insertAP(Kanha* &head,Kanha* &tail,int pos,int d){
    if(pos==1){
        insertAH(head,tail,d);
        return;
    }

    int cnt = 1;
    Kanha* temp = head;
   
    while(cnt<pos-1){
        
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAL(head,tail,d);
        return;
    }
    Kanha* NTA = new Kanha(d);
    NTA->next=temp->next;
    temp->next->prev = NTA;
    temp->next=NTA;
    NTA->prev=temp;
    
}

void remove(Kanha* &head,Kanha* &tail,int pos){
    Kanha* temp = head;
    if (pos==1){
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return ;
    }
    int cnt=1;
    Kanha* previous=NULL;
    while(cnt<pos){
        previous = temp;
        temp=temp->next;
    cnt++;
    }
    
    if(temp->next==NULL){
        tail=previous;
    }

    temp->prev=NULL;
    previous -> next = temp->next;
    temp->next = NULL;
    delete temp;

}

int main(){
   
    Kanha* head = NULL;
    Kanha* tail = NULL;

    insertAH(head,tail,100);
    print(head);
    
    insertAL(head,tail,1000);
    print(head);
    
    insertAP(head,tail,1,10000);
    
    insertAP(head,tail,2,100000);
    //cout<<"head : "<<head->data<<endl;
    print(head);
    
    insertAP(head,tail,5 ,1245);
    //
    print(head);

    remove(head,tail,5);
    print(head);
    cout<<"tail : "<<tail->data<<endl;

    
    remove(head,tail,1);
    print(head);
    cout<<"head : "<<head->data<<endl;
    return 0;
}