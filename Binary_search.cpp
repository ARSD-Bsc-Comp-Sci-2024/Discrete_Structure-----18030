#include<iostream>
using namespace std;
int binary_search(int ar[],int n, int save){
    int a = 0;
    int b = n;
    
    while(a<n){
        int mid = (a+b)/2;
        if(ar[mid]==save){
            return mid;
        }
        else if(save>ar[mid]){
            a = a+1;

        }
        else if(save<ar[mid]){
            b = b-1;
        }
    }
	return -1;

}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the element at "<<i<<"th index :";
        cin>>arr[i];
    }
    int elem;
    cout<<"Enter the element to be search  : ";
    cin>>elem;
    cout<<"Element found at "<<binary_search(arr,n,elem)<<"th index"<<endl;
    return 0;
}
