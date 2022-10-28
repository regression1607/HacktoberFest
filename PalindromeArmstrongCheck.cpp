#include<bits/stdc++.h>
using namespace std;
void IsPalindrome(int num)
{
    int n,digit,rev=0;
    n=num;
    while(num>0)
     {
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
     }
    if(n==rev)
        cout<<"The number is a Palindrome."<<endl;
    else
        cout<<"The number is not a Palindrome."<<endl;
}
void IsArmstrong(int num)
{
    int n,digit,rev=0; 
    n=num;
    while(num>0)
	{
        digit=num%10;
        rev=rev+(digit*digit*digit);
        num=num/10;
    }
    if(n==rev)
        cout<<"The number is an Armstrong number."<<endl;
    else
        cout<<"The number is not an Armstrong number."<<endl;
}
int main()
{
   int num;
   cout<<"Enter A Positive Number To Check Palindrome and Armstrong"<<endl;
   cin>>num;
   IsPalindrome(num);
   IsArmstrong(num);
   return 0;
}
