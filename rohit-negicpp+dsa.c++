greater and less program 
#include<iostream>
 using namespace std;

 int main () 
 {
    int a, b;
    cout<<"enter the first number: ";
    cin>>a;
    cout<<"enter the second number: ";
    cin>>b;
    if(a>b)
    {
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
 }

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
odd and even 
 #include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    if(number%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}

___________________________________________________________________________________________________________________________________________________________________

positive or negative or not
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number:";
    cin>>number;

    if(number>0)
    
        cout<<"positive";
    else if(number==0)
    cout<<"0";
else
        cout<<"negative";
    }
___________________________________________________________________________________________________________________________________________________________________

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int count =1; count <=n; count=count+1)
    {
        cout<< count <<endl;
    }
    } 

____________________________________________________________________________________________________________________________________________________________________

print A to Z
#include<iostream>
using namespace std;

int main()
{
     char name;
     for(name='a';  name<='z'; name=name+1)
     {
        cout<<name<<endl;
     }
    }

__________________________________________________________________________________________________________________________________________________________________

table
#include<iostream>
using namespace std;

int main()
{
     int n,i;
     cout << "enter the table: ";
     cin>>n;
     for(i=1; i<=10; i=i+1){
        cout<<n<<"*"<<i<<"="<< n*i<< endl;
     }
    }

-------------------------------------------------------------------------------------------------------------------------------------------------------------------


 #include<iostream>
using namespace std;

int main()
{
      int n, pow,i, num;
      cout<<"enter the number : ";
      cin>>n;
      cout<<"enter the power : ";
      cin>>pow;
      num=n;
      for(i=1; i<pow; i=i+1){
        num=num*n;
      }
      cout<<num;
    }

__________________________________________________________________________________________________________________________________________________________________


 
