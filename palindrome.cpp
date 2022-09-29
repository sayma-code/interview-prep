#include <iostream>
using namespace std;

int main()
{
     int n, num, dgit, rev = 0;

     cin >>num;
     n = num;

     while(num != 0){
     	dgit = num%10;
     	rev = (rev*10)+dgit;
     	num = num/10;
     }
     if(rev == n)
     {
     	cout<<"Palindrome"<<endl;
     }
     else
     cout<<"NOt Palindrome"<<endl;
    return 0;
}

