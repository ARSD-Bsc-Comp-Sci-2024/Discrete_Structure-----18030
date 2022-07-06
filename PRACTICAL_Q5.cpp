#include<iostream>
using namespace std;
int fibo(int);
int main()
{
        int n,i=0;
        cout<<"\n How many numbers you want for Fibonacci Series : ";
        cin>>n;
        cout<<"\n Fibonacci Series : ";

        while(i<n)
        {
                cout<<" "<<fibo(i);
                i++;
        }
    return 0;
}
int fibo(int n)
{
        if((n==1)||(n==0))
        {
                return(n);
        }
        else
        {
                return(fibo(n-1)+fibo(n-2));
        }
}
