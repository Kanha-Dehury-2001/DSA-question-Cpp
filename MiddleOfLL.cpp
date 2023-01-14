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

int getLength(Kanha* head){

    int len=0;
    while(head!=0){
        head=head->next;
        len++;
    }
    return len;
}

Kanha* getMiddle(Kanha * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Kanha* slow = head;
    Kanha* fast = head->next;
    while(fast!=NULL){
        fast=fast->next;//->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    return slow;
}
int main(){
   Kanha* kanha1 = new Kanha(0);
   
    Kanha* head = kanha1;
    Kanha* tail = kanha1;

    

    insertAL(tail,1);
    insertAL(tail,2);
    insertAL(tail,3);
    //insertAL(tail,4);


    int len = getLength(head);
    
    print(head);
    cout<<endl;

    int ans = len/2;

    Kanha* temp = head;

    int cnt=0;

    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }

    cout<<"Middle node is at "<<ans+1<<" it's value is "<<temp->data<<endl;
     cout<<"Middle node is "<<getMiddle(head)->data<<endl;
    
}