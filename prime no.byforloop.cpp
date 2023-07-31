#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;
//we took prime number from the user.
//now we have to check whether it is prime or not by applying for loop.

for(int i=2; i<=n; i++)
{
    if(n%i==0)
    {
       cout<<"the number is not prime"
         break;   //here we used break as maanlo 2 se hi divide hogya or pata 
                 //laggya prime nahi h, fir loop kyu chalao...apne aap break hojaae ab toh islir
    }
    else
    {cout<<"the number is prime"}
}

}
//we can do similar above code using bool. see below-

int main()
{
   int n;
   cin>>n;
   bool isPrime= 1;
   for(int i=2; i<=n; i++)
   { if (n%i==0)
     {isPrime=0;
     }
   }
   if(isPrime=1)
   {
    cout<<"the number is prime"
   }
   else
   {cout<<"the number is not prime."}

return 0;
}