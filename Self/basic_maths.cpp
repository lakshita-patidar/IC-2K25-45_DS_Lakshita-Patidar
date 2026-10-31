#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Example 1. find no. of digits 
int print1(int n)
{
    int count=0;
    while(n>0)
    {
       count++;
       n=n/10;
    }
    cout<<count;
}

//Example 2. reverse a number 
int print2(int n)
{
    while(n>0){
    int revNum=0;
    int digit;
    digit=n%10;
    revNum=(revNum*10)+digit;
    n=n/10;
    cout<<revNum; 
    }
}

//Example 3. check number is palindrome or not
int print3(int n)
{
    int originalN=n; //original n for later comparision
    int revNum=0;
    while(n>0)
    {
        int digit=n%10;
        revNum=(revNum*10)+digit;
        n=n/10;
    }
        if(originalN==revNum)
        {
            cout<<"True";
        }
        else
        cout<<"False";
}

//Example 4. check number is armstrong or not 
int print4(int n)
{
    int originalN=n;
    int ans=0;
    while(n>0)
    {
        int digit=n%10;
        ans=ans+(digit*digit*digit);
        n=n/10;
    }
    if(ans==originalN)
    {
        cout<<"number is armstrong number";
    }
    else
    {
        cout<<"number is not armstrong number";
    }
}

//Example 5. print all the divisors(factors) of a number time complixty is O(n) in this method 
//this method time complexity is more so for less time complexity run the loop for sqrt of n time
int print5(int n)
{
    for(int i=1; i<=n; i++) //loop from 1 to the number 
    {
        if(n%i==0) //checking n is completely by which numbers 
        {
            cout<<i<<" ";
        }
    }
}

int altPrint5(int n) //do this when we are asked for code with less time complexity is O(sqrt(n)) in this method 
{
    vector<int> ls; //make list because output will be unorganised so we need to sort it 
    for(int i=1; i<=sqrt(n); i++)
    {
       if(n%i==0)
       {
        ls.push_back(i); //including the i in list 
        if((n/i)!=i) //if this will equal then two same values will be in list so to avoid duplicates we use this 
        {
            ls.push_back(n/i);
        }
       }
    }
    sort(ls.begin(),ls.end()); //sorting the list 
    for(auto it : ls)
    cout<<it<<" ";

}

//Example 6. Check prime number 
// this method has time complexity O(n)
int print6(int n)
{
    int count=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
        if(count==2)
        {
            cout<<"prime number";
        }
        else{
            cout<<"not prime number";
        }
}

// for less time complexity another method we use if asked for code with less time complexity 
int altPrint6(int n)
{
    int count=0;
    for(int i=1; i*i<=n; i++) //instead of writing sqrt n we can write i*i (i square) because if we remove sqrt from one side we have to do square on other side 
    {
        if(n%i==0)
        {
            count++;
            if((n/i)!=i)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        cout<<"prime number";
    }
    else 
    {
        cout<<"not prime number";
    }
}

//Example 7. calculate GCD (greatest common divisor) or HCF(highest common factor)
//this is less time complexity code there are many other ways 
int print7(int a, int b)
{
   while(a>0 && b>0)
   {
    if(a>b)
    {
        a=a%b;
    }
    else {
        b=b%a;
    }
   }
    if(a==0){
    cout<<b;}
    else {
    cout<<a;}
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
    /*run this only for print7 function 
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    */
    print1(n);
}
