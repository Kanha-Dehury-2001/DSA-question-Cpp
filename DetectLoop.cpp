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

bool detectLoop(Kanha* head){

    if(head==NULL){
        return false;
    }

    map<Kanha*,bool> visited;
    Kanha* temp = head;
    
    while(temp!=NULL){
        /*cout<<endl;
        cout<<visited[temp];
        cout<<endl;*/
        if(visited[temp]==true){
            cout<<"Element is "<<temp->data<<endl;
            return true;
        }
    
        visited[temp]=true;
        temp = temp->next;
    }
    return false;


}
Kanha* floydDA(Kanha* &head){
        if(head==NULL){
            return NULL;
        }
        Kanha* fast=head;
        Kanha* slow=head;

        while (slow!=NULL && fast != NULL)
        {
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
            }

            slow = slow->next;

            if(slow==fast){
                //cout<<"ELEMENT "<<fast->data<<endl;
                return slow;
            }
        }
        return NULL;
        
}
    Kanha* getStarting(Kanha* head){

        if(head==NULL){
            return NULL;
        }
            Kanha* slow = floydDA(head);
            Kanha* inter= slow;
            slow=head;


            while(slow!=inter){
                slow=slow->next;
                inter= inter->next;
            }
            return slow;
    }

    void removeLoop(Kanha* head){
        Kanha* sode = getStarting(head);
        if(head==NULL){
            return;
        }

         
         Kanha*temp = sode;

         while(temp->next!=sode){
            temp=temp->next;
         }
       
        temp->next = NULL;
        
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

    tail->next=head->next;
    cout<<endl;

    removeLoop(head);
    cout<<"Loop present or not    "<<detectLoop(head)<<endl;
    if(floydDA(head)!=NULL){
        cout<<"Loop present "<<endl;
    }
    else cout<<"Loop is  not present ";
        cout<<"starting node"<<getStarting(head)->next<<endl;
    //print(head);

    
    
    return 0;
    }