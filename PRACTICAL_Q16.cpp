#include <iostream>
using namespace std;

int main()
{
    int n , e;
    int a[n][n];
    cout<<"Enter number of verticesv:";
    cin>>n;
    cout<<"Enter number of edges :";
    cin>>e;
    
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++)
        {
            a[i][j] = 0;
        };
    }
    int v, u;
   
    for (int i = 0; i < e; i++)
    {
        cout<<"Enter the edges :" << endl;
        cin>>v>>u;
        a[v][u] = 1;
        a[u][v] = 1;
    }
    cout <<"Adjacency matrix is"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<a[i][j] << "  ";
        }
        cout << endl;
    }
    bool checkGraph = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
           {
                if (a[i][i] != 0)
				{
                         checkGraph = false;
				}
                
           }
    }
    if (checkGraph)
            cout << "This graph is a complete graph." << endl;
    else
            cout << "This Graph is an incomplete graph." << endl;
    return 0;
    }
    
