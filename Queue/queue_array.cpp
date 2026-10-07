#include<iostream>
#define max 6
using namespace std;

class myqueue
{
    private:
    int *arr;
    int rear;
    int front;

    public:
    //constructor
    myqueue()
    {
        arr=new int[max];
        front = -1;
        rear = -1;
    }

    //isempty
    bool isempty()
    {
        if(front == -1)
        {
            cout<<"Queue is empty\n";
            return true;
        }
        return false;
    }

    //isfull
    bool isfull()
    {
        if(rear == max-1)
        {
            cout<<"Queue is full\n";
            return true;
        }
        return false;
    }

    //enqueue
    void enqueue(int newel)
    {
        if(isfull())
        {
            cout<<"Queue overflow\n";
            
        }
        //first element 
        if(front == -1)
        {
            front=0;
        }
            rear++;
            arr[rear]=newel;
            cout<<"Element has been enque\n";
    }

    //dequeue
    int dequeue()
    {
        if(isempty())
        {
            cout<<"Queue underflow\n";
            return -1;
        }
        if(front>rear) //queue is empty
        {
            front = -1;
            rear = -1;
        }
            int delel;
            delel=arr[front];
            front++;
            return delel;
    }

    //peek
    int peek()
    {
        if(isempty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        else{
            cout<<"The top is: ";
            return arr[front];
        }
    }

    //display
    int display()
    {
        if(isempty())
        {
            cout<<"Queue is empty";
            return -1;
        }
        else{
            cout<<"Queue elements: ";
            for(int i=front; i<=rear; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
    //destructor
    ~myqueue()
    {
        delete[] arr;
    }
};
int main()
{
    myqueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.dequeue()<<endl;
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;
    cout<<(q.isempty() ? "yes" : "no")<<endl;
    q.isfull();
    q.display();
    return 0; 
}
