 #include<bits/stdc++.h>
 #include<array>
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

void print(Kanha* head ){
    
    Kanha* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}

Kanha* getMiddle(Kanha* head){


    Kanha* fast = head;
    Kanha* slow = head;

    if(fast->next->next==NULL){
        return slow;
    }

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast= fast->next->next;
        //cout<<endl;
    }
    
    return slow;
    
}

Kanha* reverse(Kanha* head){
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
        return head;
}


int getLength(Kanha* head){

    int len=0;
    while(head!=0){
        head=head->next;
        len++;
    }
    return len;
}


bool checkPalindrome(Kanha* head){
    int k = getLength(head);
    Kanha* temp = head;

    int* a = new int[k];
    int cnt=0;
    while(cnt<k){
        a[cnt]=temp->data;
        temp=temp->next;
        cnt++;
    }

    int s= 0;
    int e = k-1;

    while(s<e){
        if(a[s]!=a[e]){
            return false;
        }
        else {
            s++;
            e--;
        }
    }
    return true;
}

bool checkPalindromeA2(Kanha* head){
    if(head->next==NULL){
        return true;
    }

    Kanha* middle = getMiddle(head);
    
    Kanha* temp = middle->next;
    Kanha* h2 = reverse(temp);
    temp=h2;
    Kanha* h1 = head;

    while(h2!=NULL){
        if(h1->data != h2->data){
            return false;
        }
        else if(h2->next == NULL){
            break;
        }
        else {
            h1=h1->next;
            h2=h2->next;
        }
    }
    reverse(temp);
    
    return true;
    
    
}

int main(){

    Kanha*list=new Kanha(1);
    Kanha*head1=list;
    Kanha*tail=list;
   insertAL(tail,5556666);
    insertAL(tail,1);
    print(head1);

    if(checkPalindrome(head1)){
        cout<<"LIST IS PALINDROME : A1"<<endl;
    }
    else {
        cout<<"LIST IS NOT PALINDROME "<<endl;
    }
   


     if(checkPalindromeA2(head1)){
        cout<<"LIST IS PALINDROME :A2"<<endl;
    }
    else {
        cout<<"LIST IS NOT PALINDROME "<<endl;
    }
   print(head1);
}