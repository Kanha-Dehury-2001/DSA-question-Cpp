void cutMiddle(stack<int>&inputStack, int n,int N){
    //base case
    if(inputStack.empty()){
        return;
    }
    
    if(n==N){
        inputStack.pop();
        return;
    }
    
    int temp = inputStack.top();
    inputStack.pop();
    n++;
    //recursive call
    cutMiddle(inputStack,n,N);
    
    inputStack.push(temp);
}

void deleteMiddle(stack<int>&inputStack, int N){
	int n = 0 ;
    int middle = N/2;
    cutMiddle(inputStack,n,middle);
   
}