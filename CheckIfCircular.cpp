bool isCircular(Kanha* head){
    if(head==NULL){
        return true;
    }
    
    /*if(head->next==NULL){
        return false;
    }
    else {return true;}*/
    
    Kanha* temp=head->next;
    while(head!=temp && temp!=NULL){
        temp=temp->next;
    }
    if(temp==head){
            return true;
    }
    return false;
}