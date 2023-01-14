#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    Node *next;
    Node *arb;

    Node(int x) {
        data = x;
        next = NULL;
        arb = NULL;
    }
};


class Solution
{
    
    private:
    void insertAL(Node* &chead,Node* &ctail,int d){
        if(chead==NULL){
            Node* temp = new Node(d);
            chead=temp;
            ctail=temp;
            return;
        }
        
    Node* temp = new Node(d);
    ctail -> next = temp;
    ctail=temp;
    }
    public:
    Node *copyList(Node *head)
    {
        Node* chead = NULL;
        Node* ctail = NULL;
        Node* thead =head;
        
        //coloning next part
        while(thead!=NULL){
            int d = thead->data;
            insertAL(chead,ctail,d);
            thead=thead->next;
        }
        
        map<Node*,Node*> NTC;
        thead=head;
        Node* tchead=chead;
        
        //mapping org node with clone node
        while(thead!=NULL && tchead!=NULL){
            NTC[thead]=tchead;
            thead=thead->next;
            tchead=tchead->next;
        }
        
        //Now clonning the random pointer
        thead=head;
        tchead=chead;
        
        while(tchead!=NULL && thead!=NULL){
            tchead->arb = NTC[thead->arb];
            thead=thead->next;
            tchead= tchead->next;
            
        }
        return chead;
    }

};

