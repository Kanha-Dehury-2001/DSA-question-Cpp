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

void reverse(Kanha* &head){
        Kanha* curr = head;
        Kanha* prev= NULL;
        Kanha* forw= curr->next;

        while(curr!=NULL){
            forw=curr->next;
            curr->next= prev;
            prev=curr;
            curr=forw;

        }
        head=prev;
    }
    void insertAL(Kanha* &head,Kanha* &tail,int d){
        if(head==NULL){
            Kanha* temp = new Kanha(d);
            head=temp;
            tail=temp;
            return;
        }
        
    Kanha* temp = new Kanha(d);
    tail -> next = temp;
    tail=temp;
    }
Kanha* addTwoLL(Kanha* first , Kanha* second){
        Kanha*head = NULL;
        Kanha*tail=NULL;
        reverse(first);
        reverse(second);
        Kanha*s = first;
        Kanha*e = second;
        int carry = 0;
        
        while(s!= NULL & e!= NULL){
            int sum = (s->data)+(e->data)+carry;
            int put = sum%10;
            carry = sum/10;
            
            insertAL(head,tail,put);
            s=s->next;
            e=e->next;
            if(s==NULL || e==NULL){
                break;
            }
        }
        
        while(s!=NULL){
            int sum = (s->data)+carry;
            int put = sum%10;
            carry = sum/10;
            
             insertAL(head,tail,put);
        
            s=s->next;
            if(s==NULL){
                break;
            }
        }
        while(e!=NULL){
            int sum = (e->data)+carry;
            int put = sum%10;
            carry = sum/10;
            
             insertAL(head,tail,put);
            e=e->next;
            if(e==NULL){
                break;
            }
        }
        if(carry!=0){
             insertAL(head,tail,carry);
        }
        reverse(head);
        
        return head;
}
void print(Kanha* &head ){
    
    Kanha* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Kanha* merge(Kanha* list1,Kanha* list2){
        if(list1==NULL){
            return list2;
        }
        
        if(list2==NULL){
            return list1;
        }
    
    Kanha* ans = new Kanha(-1);
    Kanha* hea = ans;
    
    while(list1 != NULL && list2 != NULL){

        
        if(list1 -> data < list2 -> data){
            hea->next = list1;
            hea=list1;
            list1=list1->next;
        }
        else{
            hea->next = list2;
            hea=list2;
            list2=list2->next;
        }
    }
    
    while(list1!= NULL){
        hea->next = list1;
        hea=list1;
        list1=list1->next;
    }
    while(list2!=NULL){
        hea->next = list2;
            hea=list2;
            list2=list2->next;
    }
    ans = ans->next;
    return ans;
}

int main(){

    Kanha*list1=new Kanha(1);
    Kanha*head1=list1;
    Kanha*tail1=list1;
    insertAL(head1,tail1,3);
    insertAL(head1,tail1,6);
    print(head1);

    Kanha*list2=new Kanha(1);
    Kanha*head2=list2;
    Kanha*tail2=list2;
    insertAL(head2,tail2,7);
    insertAL(head2,tail2,9);
    print(head2);
    //Kanha* ans = addTwoLL(list1,list2);
    Kanha* ans = merge(list1,list2);
    print(ans);

    
}