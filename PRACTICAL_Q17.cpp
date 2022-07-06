#include <iostream>
using namespace std;
int main(){
    int a[100][100];
    int v,e;
    
    cout<<"Enter the no. of Vertices :";
    cin>>v;
    cout<<"Enter the no. of Edges :";
    cin>>e;
 
     
     for(int i=1; i<=e ;i++){
     	cout<<"Enter the edge of Directed graph"<<endl;
         int v1,v2;
         cin>>v1>>v2;
         a[v1][v2]=1;
         a[v2][v1]=0;
     }
     cout<<"The Adjacency Matrix for the Given data is: "<<endl;
     for(int i=1;i<v;i++){
         for(int j=1;j<v;j++){
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
     int indgree=0, outdgree=0;
     for(int i=0; i<v;i++){
         cout<<"Out degree for "<<i<< " : ";
         for(int j=0; j<v;j++){
             if(a[i][j]== 1){
                 outdgree=outdgree+1;
             }
         }
        
        cout<<outdgree;
        cout<<endl;
        outdgree=0; 
     }
     cout<<endl<<endl;
     
      for(int i=0; i<v;i++){
        cout<<"In degree for "<<i<< " : ";
         for(int j=0; j<v;j++){
             if(a[j][i] == 1){
                 indgree = indgree+1;
             }
         }
         cout<<indgree;
        cout<<endl;
        indgree=0; 
      }
 
    return 0;
}
