#include <iostream>
#include <cmath>



using namespace std;
int a,b,c;
double delta,sqrt_delta, x_first, x_second, x;


int main()
{
    cout<<"Program rozwiazuje rownanie kwadratowe: ax^2 +bx+ c =0, gdzie a,b,c naleza do liczb calkowitych"<<endl;


    cout<<"Podaj a: ";
    cin>>a;

    cout<<"Podaj b: ";
    cin>>b;

    cout<<"Podaj c: ";
    cin>>c;


    if(a != 0){

       delta = b*b -4*a*c;
       sqrt_delta = sqrt(delta);


          if(delta<0){
             cout<<"Rownanie nie ma rozwiazan";
          }
          else if(delta == 0){

             x = (-b-delta) / (2*a);
             cout<<"Rownanie ma jedno rozwiazanie: "<<x;
          }
          else{
             x_first = (-b-sqrt_delta) / (2*a);
             x_second = (-b+sqrt_delta) / (2*a);

            cout<<"Rownanie ma dwa rozwiazania: "<<x_first<<" oraz "<<x_second;
          }
    }

    else{
        cout<<"Rownanie nie jest rownaniem kwadratowym";
    }


    return 0;
}
