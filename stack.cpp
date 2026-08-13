#include<iostream>
#define max 5
using namespace std;

// declaration of stack
class stacktype
{public:
    int top;
    int el[max];

//initialization of stack
void initstack(stacktype * s){
    s -> top = -1;
}

//checking stack is full or not
int isfull(stacktype s){
    if(s.top == max-1)
        return 1;
    else 
    return 0;
}

//checking stack is empty or not
int isemptystack(stacktype s){
    if(s.top == -1)
    return 1;
    else
    return 0;
}

//function to insert element in stack
void push(stacktype * s, int newel){
    if(isfull(*s)==1)
    {
      cout<<"overflow error "<<endl;
    }
    else {
        s -> top++;
        s -> el[s->top]=newel;
        cout<<"Element has been pushed"<<endl;
    }
}

//function to delete element from stack
int pop (stacktype*s)
{
    int delel=-9999;
    if(isemptystack(*s)==1)
    cout<<"Underflow error"<<endl;
    else
    {
        delel= s->el[s->top];
        s -> top--;
        cout<<"Element deleted is: "<<delel<<endl;
        return (delel);
    }
}

//display stack
void display(stacktype s){
    int i;
    if(isemptystack(s)==1)
    cout<<" stack is empty"<<endl;
    else
    for(i=0; i<=s.top; i++)
    {
        cout<<s.el[i];
    }
}
};
int main()
{
    stacktype stack;
    stack.initstack(&stack);
    stack.isfull(stack);
    stack.isemptystack(stack);
    stack.push(&stack,10);
    stack.pop(&stack);
    stack.display(stack);

}