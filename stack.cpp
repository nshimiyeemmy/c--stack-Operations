#include<iostream>
#define MAX 5
using namespace std;

int STACK[MAX],TOP,n; 
//stack initialization
void initStack(){
    TOP=-1;
}
//check it is empty or not
int isEmpty(){
    if(TOP==-1)
        return 1;
    else
        return 0;
}
 
//check stack is full or not
int isFull(){
    if(TOP==MAX-1)
        return 1;
    else   
        return 0;
}
 
  void push(int num){
    if(isFull()){
        cout<<"\n\t\t\tSTACK is FULL."<<endl;
        return; 
    }
    ++TOP;
    STACK[TOP]=num;
    cout<<"\n\t\t\t" << num <<" has been inserted."<<endl;
}
//returns the top data value of the stack
void peek()
{
    if (!isEmpty()) {
       cout<<"\n\t\t\t" <<"Top member is : "<< STACK[TOP];
       return;
    }
    else{
    	cout<<"\n\t\t\t Stack is empty"<<endl;
	}
  
}
 
void display(){
    int i;
    if(isEmpty()){
        cout<<"\n\t\t\tSTACK is EMPTY."<<endl;
        return;
    }
    for(i=TOP;i>=0;i--){
        cout<<"\t"<< STACK[i];
    }
    cout<<endl;
}
 
//pop - to remove item
void pop(){
    int temp;
    if(isEmpty()){
        cout<<"\n\t\t\tSTACK is EMPTY."<<endl;
        return;
    }
     
    temp=STACK[TOP];
    TOP--;
    cout<<"\n\t\t\t"<<temp <<" has been deleted."<<endl;   
}
int main(){
    int num;
    initStack();
    char ch;
    do{
            int a;
             cout<<"\n\t\t.........Stack Operations Implementatation...............\n";
            cout<<"\n\t\t\t1.Push()\n";
            cout<<"\n\t\t\t2.Pop()\n";
            cout<<"\n\t\t\t3.Display()\n";
             cout<<"\n\t\t\t4.Peek()\n";
            cout<<"\n\t\tPlease enter your choice: ";
            cin>>a;
            switch(a)
            {
                case 1:
                    cout<<"\n\t\t\tEnter an Integer Number: ";
                    cin>>num;
                    push(num);
                break;
                 
                case 2: 
                    pop();
                    break;
                 
                case 3: 
                    display();
                    break;
                case 4: 
                    peek();
                    break;
                 
                default : 
                cout<<"\n\t\t\tAn Invalid Choice!!!\n";
                 
                 
            }
            cout<<"\n\t\t\tDo you want to continue ? (y/n) ";
            cin>>ch;                      
            }while(ch=='Y'||ch=='y');
    return 0;
}



