Method 1. Iterative approach for Fibonacci series
fib(int n){
 int a=0,b=1,c;
 if(n==0){
 return a;
 }
 for(int i=2;i<=n;i++){
 c=a+b;
 a=b;
 b=c;
 }
 return b;
}
int main(){
 int n;
 cin>>n;
 cout<<fib(n);
 return 0;
}

Method 2. Recursive approach for Fibonacci series

#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
 if (n <= 1)
 return n;
 return fib(n - 1) + fib(n - 2);
}
int main()
{
 int n = 9;
 cout << fib(n);
 getchar();
 return 0;
}
