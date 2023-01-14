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

int getLength(Kanha* head){
    
    Kanha* temp=head->next;

    int len=1;
    while(head!=temp){
        temp=temp->next;
        len++;
    }
    return len;
}

void splitIt(Kanha* head){
    int k = getLength(head)/2;

    Kanha*prev=NULL;
    Kanha*head2=head;
    int cnt=0;
    while(cnt<k){
        prev=head2;
        head2=head2->next;
       
        cnt++;
    }

    prev->next=head;
    print(head);
    cout<<endl;

    prev=head2;
    cnt=1;
    while(cnt<k){
        prev=prev->next;
        cnt++;
    }

    
    prev->next=head2;
    print(head2);
    cout<<endl;
}


int main(){
    Kanha* tail = NULL;

    insertNode(tail,5,3);
    print(tail);
    Kanha* head = tail;
    insertNode(tail,3,6);
    print(tail);
    
   /*insertNode(tail,3,1);
    print(tail);

    insertNode(tail,3,7);
    print(tail);

    insertNode(tail,6,9);
    print(tail);

    insertNode(tail,6,4);
    print(tail);*/
    
    splitIt(head);



   // print(tail);
    
    
    return 0;
}