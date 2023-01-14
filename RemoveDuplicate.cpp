#include <iostream>
#include <map>
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


        
   void uniqueSortedList(Kanha * head) {
    if(head==NULL){
        return ;
    }
    
    Kanha* curr = head;
    
    while( curr->next!=NULL){
        
        if((curr->data)==(curr->next->data)){
            Kanha*forw=curr->next->next;
            Kanha* NTD = curr->next;
            curr->next=forw;
            NTD->next=NULL;
            delete NTD;
        }
      else{
          curr=curr->next;
      }
    }
    return ;
}

    
    int main(){
    Kanha* kanha1 = new Kanha(2);
   
    Kanha* head = kanha1;
    Kanha* tail = kanha1;

    

    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);
    insertAL(tail,2);

    uniqueSortedList(head);

    print(head);


    
    
    return 0;
    }