#include <iostream>
using namespace std;



bool prime_number(int a)
{
    if(a<2) return 0;

	for(int i=2;i*i<=a;i++)
	{
        if(a%i==0) return 0;
	}
	return true;
}


bool cube(int a)
{
    for(int i=0; i*i*i<=a; i++)
    {
        if(i*i*i==a) return 1;
    }

    for(int i=0; i*i*i>=a; i--)
    {
       if(i*i*i==a)
       return 1;
    }
       return 0;
}

int maximum(int a,int b)
{
    if(a>b) return a;
    if(b>a) return b;
}

void change(int&a,int&b)
{
  int c;
  c=a;
  a=b;
  b=c;
}


int main()
{
    cout << "9.1.10 Daniel Kosek" << endl;

    int first_number;

    cout<<"Podaj liczbe: ";
    cin>>first_number;
    cout<<"Wynik: "<<prime_number(first_number)<<endl;


    cout<<endl<<endl;

    cout << "9.1.11 Daniel Kosek" << endl;

    int second_number;
    cout<<"Podaj liczbe: ";
    cin>>second_number;
    cout<<"Wynik: "<<cube(second_number)<<endl;



    cout<<endl<<endl;

    cout << "9.1.12 Daniel Kosek" << endl;


    int a,b;

    cout<<"Podaj a: ";
    cin>>a;

    cout<<"Podaj b: ";
    cin>>b;


    cout<<"Max: "<<maximum(a,b)<<endl;


    cout<<endl<<endl;


    cout << "9.1.13 Daniel Kosek" << endl;

    int x,y;

    cout<<"Podaj x: ";
    cin>>x;

    cout<<"Podaj y: ";
    cin>>y;


    cout<<x<<"<<<--->>>"<<y<<endl;

    change(x,y);

    cout<<x<<"<<<--->>>"<<y<<endl;


    return 0;
}



























