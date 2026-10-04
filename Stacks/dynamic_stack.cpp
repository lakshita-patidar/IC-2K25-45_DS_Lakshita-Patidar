#include<iostream>
using namespace std;

class mystack
{
    private:
    int *arr;
    int top;
    int capacity; //how many elements our stack can have 

    public:
    //constructor
    mystack(int cap)
    {
        capacity=cap;
        arr=new int[capacity];
        top=-1;
    }
    
    bool isempty()
    {
        if(top == -1)
        {
        cout<<"Stack is empty"<<endl;
        return true;
        }
        return false;
    }

    bool isfull()
    {
        if(top == capacity-1)
        {
            cout<<"Stack is full"<<endl;
            return true;
        }
        return false;
    }

    void push(int newel)
    {
        if(isfull())
        {
            cout<<"overflow\n";
        }
        else{
            top++;
            arr[top]=newel;
            cout<<"Element has been pushed\n";
        }
    }

    int pop()
    {
        if(isempty())
        {
            cout<<"Underflow\n";
            return -1;
        }
        else{
            int delel;
            delel = arr[top];
            top--;
            return delel;
        }
    }

    int peek()
    {
        if(isempty())
        {
            cout<<"Underflow stack\n";
            return -1;
        }
        else{
            cout<<"The top is: ";
            return arr[top];
        }
    }

    int display()
    {
        if(isempty())
        {
            cout<<"Underflow stack\n";
            return -1;
        }
        else{
            cout<<"The stack is: \n";
            for(int i=0; i<=top; i++)
            {
                cout<<arr[i]<<endl;
            }
        }
    }

    //destructor
    ~mystack(){
        delete[] arr;
    }
};

int main()
{
    mystack s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<endl;
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
    cout<<(s.isempty() ? "yes" : "no")<<endl;
    s.isfull();
    s.display();
    return 0;
}
