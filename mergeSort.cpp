#include <iostream>
using namespace std;

class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };


node* getMid(node* head){
    node* slow = head;
    node* fast = head;
    
    while(fast!=NULL && fast->next !=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node* merge(node* list1,node* list2){
        if(list1==NULL){
            return list2;
        }
        
        if(list2==NULL){
            return list1;
        }
    
    node* ans = new node(-1);
    node* hea = ans;
    
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

node* mergeSort(node *head) {
    //Base Case
    if(head==NULL || head->next == NULL){
        return head;
    }
    
    //Divide the LL in two parts
    node* middle = getMid(head);
    
    //create two diff LL
    node* list1 = head;
    node*list2 = middle->next;
    middle->next = NULL;
    
    //recursive call
    list1 = mergeSort(list1);
    list2 = mergeSort(list2);
    
    //merge both list 1 & 2
    node* result = merge(list1,list2);
    
    return result;
}