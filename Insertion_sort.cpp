#include <iostream>
using namespace std;

int main()
{

    int r;
    cout<<"Enter Size of arrays : ";
    cin>>r;

    int arr[r];

    cout<<"Enter elements : ";
    for(int i=0;i<r;i++){
        cin>>arr[i];
    }
    
    int i,j,pass;
    for(i=1; i<r ; i++){
        pass = arr[i];
        j=i;
        while(arr[j-1]>pass && j>=1){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=pass;
    }
	cout<<"Asending order is "<<endl;

    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 
