
#include <iostream>
using namespace std;
int fact(int n) {
   if (n == 0 || n == 1)
   return 1;
   else
   return n * fact(n - 1);
}

int main() {
   int n, r, comb, per;
   cout<<"Enter n : ";
   cin>>n;
   cout<<"Enter r : ";
   cin>>r;
   comb = fact(n) / (fact(r) * fact(n-r));
   cout << "Combination : " << comb;
   cout<<endl;
   per = fact(n) / fact(n-r);
   cout << "Permutation : " << per;
   return 0;
}
