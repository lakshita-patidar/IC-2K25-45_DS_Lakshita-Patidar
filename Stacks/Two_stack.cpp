#include<iostream>
#define max 10
using namespace std;
class mystack
{
    private:
    //initialize and declare
    int stack[max];
    int top1 = -1; //stack 1
    int top2 = max; //stack 2

    public:
    //push
    void push1(int value)
    {
        if(top1+1 == top2)
        {
            cout<<"Stack Overflow\n";
        }
        else{
            top1++;
            stack[top1]=value;
            cout<<"Element has been pushed in stack 1\n";
        }
    }

     void push2(int value)
    {
       if(top1+1 == top2)
        {
            cout<<"Stack Overflow\n";
        }
        else{
            top2--;
            stack[top2]=value;
            cout<<"Element has been pushed in stack 2\n";
        }
    }

    //pop 
    int pop1()
    {
        if(top1 == -1)
        {
            cout<<"Stack Underflow\n";
            return -1;
        }
        else{
            int delel;
            delel=stack[top1];
            top1--;
            return delel;
        }
    }

    int pop2()
    {
        if(top2 == max)
        {
            cout<<"Stack underflow\n";
            return -1;
        }
        else{
            int delel;
            delel=stack[top2];
            top2++;
            return delel;
        }
    }

    //display
    int display1()
    {
        if(top1 == -1)
        {
            cout<<"Stack 1 is empty\n";
            return -1;
        }
        cout<<"Stack 1 is: ";
        for(int i=0; i<=top1; i++)
        {
            cout<<stack[i]<<" ";
        }
    }

    int display2()
    {
        if(top2 == max)
        {
            cout<<"\nStack 2 is empty";
            return -1;
        }
        cout<<"\nStack 2 is: ";
        for(int i=max-1; i>=top2; i--)
        {
            cout<<stack[i]<<" ";
        }
    }
};

int main()
{
    mystack s;
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(90);
    s.push2(80);
    s.push2(70);
    cout<<s.pop1()<<endl;
    cout<<s.pop2()<<endl;
    s.display1();
    s.display2();

}
