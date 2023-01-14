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

void insertAL(Kanha* &tail,int d){
    Kanha* temp = new Kanha(d);
    tail -> next = temp;
    tail=temp;
}

void print(Kanha* &head ){
    
    Kanha* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

Kanha* reverseKGroup(Kanha* head, int k) {
        if(head==NULL){
        return NULL;
    }
    Kanha* forw=NULL;
    Kanha * curr=head;
    Kanha* prev = NULL;
    int cnt=0;
    
    while(curr!=NULL && cnt <k){
        forw=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forw;
        cnt++;
    }
    if(forw!=NULL){
        head->next = reverseKGroup(forw,k);
    }
    return prev;

    }

    int main(){
    Kanha* kanha1 = new Kanha(0);
   
    Kanha* head = kanha1;
    Kanha* tail = kanha1;

    

    insertAL(tail,1);
    insertAL(tail,2);
    insertAL(tail,3);
    insertAL(tail,4);
    print(head);
    cout<<endl;
    head=reverseKGroup(head,2);
    print(head);

    return 0;
    }