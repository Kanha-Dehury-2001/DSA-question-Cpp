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
    tail-> next = temp;
    tail=temp;
}

void print(Kanha* &head ){
    
    Kanha* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

void sortList(Kanha* &head)
{
    Kanha* head0 = NULL;
    Kanha* head1 = NULL;
    Kanha* head2 = NULL;
    
    Kanha* tail0 = NULL;
    Kanha* tail1 = NULL;
    Kanha* tail2 = NULL;
    
    Kanha* curr = head;
    
    while(curr!=NULL){
        if(curr->data == 0){
            if(head0==NULL){
                Kanha* temp = new Kanha(curr->data);
                head0=temp;
                tail0=temp;
            }
            else{
                Kanha* temp = new Kanha(curr->data);
                tail0 -> next = temp;
                tail0=temp;
        }
        }
         else if(curr->data == 1){
            if(head1==NULL){
                Kanha* temp = new Kanha(curr->data);
                head1=temp;
                tail1=temp;
            }
            else{
                Kanha* temp = new Kanha(curr->data);
                tail1 -> next = temp;
                tail1=temp;
            }
        }
          else if(curr->data == 2){
            if(head2==NULL){
                Kanha* temp = new Kanha(curr->data);
                head2=temp;
                tail2=temp;
            }
            else{
                Kanha* temp = new Kanha(curr->data);
                tail2-> next = temp;
                tail2=temp;
            }
          }
        curr=curr->next;
      }
      if(head0==NULL){
           tail1->next=head2;
          head=head1;
      }
    else if(head1==NULL){
        tail0->next=head2;
        head=head0;
    }
    else if(head2==NULL){
        tail0->next=head1;
        head=head0;
    }
    else{
    tail0->next=head1;
    tail1->next=head2;
    head=head0;
    }
   
    //return head;
}

int main(){
   Kanha* kanha1 = new Kanha(2);
   
    Kanha* head = kanha1;
    Kanha* tail = kanha1;


    insertAL(tail,1);
    insertAL(tail,2);
    insertAL(tail,0);
    insertAL(tail,2);
    insertAL(tail,0);
    insertAL(tail,1);
    cout<<"Before the sort operation the linked list is :"<<endl;
    print(head);
    
    sortList(head);
    cout<<"The Sorted Linked list is : "<<endl;

   print(head);
   
}