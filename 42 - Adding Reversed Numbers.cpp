//SPOJ
//Problem 42 [Adding Reversed Numbers]

#include <iostream>
using namespace std;

unsigned long long reverse_number(unsigned long long n)
{
unsigned long long reversed_number=0;
while(n!=0)
    {
    unsigned int remainder=n%10;
    reversed_number=reversed_number*10+remainder;
    n/=10;
    }
return reversed_number;
}

int main()
{
unsigned int test_cases=0;
cin>>test_cases;

while(test_cases--)
    {
    unsigned long long n1=0,n2=0;
    cin>>n1>>n2;
    cout<<reverse_number(reverse_number(n1)+reverse_number(n2))<<endl;
    }
return 0;
}