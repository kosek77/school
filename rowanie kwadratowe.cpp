#include <iostream>
#include <cmath>



using namespace std;
int a,b,c;
double delta,pzdelta, xjed, xdwa, x;


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
       pzdelta = sqrt(delta);


          if(delta<0){
             cout<<"Rownanie nie ma rozwiazan";
          }
          else if(delta == 0){

             x = (-b-delta) / (2*a);
             cout<<"Rownanie ma jedno rozwiazanie: "<<x;
          }
          else{
             xjed = (-b-pzdelta) / (2*a);
             xdwa = (-b+pzdelta) / (2*a);

            cout<<"Rownanie ma dwa rozwiazania: "<<xjed<<" oraz "<<xdwa;
          }
    }

    else{
        cout<<"Rownanie nie jest rownaniem kwadratowym";
    }


    return 0;
}
