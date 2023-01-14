 #include<bits/stdc++.h>
 using namespace std;

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
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}


    void mergeTwoLists(Kanha* list1, Kanha* list2) {
        if(list1==NULL && list2==NULL){
            return;
        }
        Kanha* curr1=list1;
        Kanha* curr2=list2;
        Kanha* forw1=list1->next;
        Kanha* forw2=list2->next;
        
        while(forw1!=NULL && curr2!=NULL){
            if((curr1->data<= curr2->data)&& (curr2->data<= forw1->data)){
                cout<<"1"<<endl;

                curr1->next=curr2;
                forw2=curr2->next;
                curr2->next=forw1;
                curr1=curr2;
                curr2=forw2;
            }
            else{
                
                curr1=forw1;
                forw1=forw1->next;
                
                if(forw1==NULL){
                    forw1->next=curr2;
                    return;
                }
            }
        }
    
        
        return;
    }
int main(){

    Kanha*list1=new Kanha(1);
    Kanha*head1=list1;
    Kanha*tail1=list1;
    insertAL(tail1,2);
    insertAL(tail1,4);
    print(head1);

    Kanha*list2=new Kanha(1);
    Kanha*head2=list2;
    Kanha*tail2=list2;
    insertAL(tail2,3);
    insertAL(tail2,4);
    print(head2);

    mergeTwoLists(list1,list2);
    print(list1);
    
}