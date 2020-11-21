#include <iostream>
#include <cmath>


using namespace std;
double a,b,c, polowaobw, pole;


int main() {

    cout<<"Program sprawdza czy mozna utworzyc twojkat, a jesli tak to oblicza jego pole"<<endl;


    cout<<"Podaj dlugosc pierwszego boku: ";
    cin>>a;

    cout<<"Podaj dlugosc drugiego boku: ";
    cin>>b;

    cout<<"Podaj dlugosc trzeciego boku: ";
    cin>>c;


    if(a+b >c && a+c>b && b+c>a){

       cout<<"Da sie utworzyc trojkat"<<endl;
       polowaobw = (a+b+c)/2;
       pole = sqrt(polowaobw*(polowaobw-a)*(polowaobw-b)*(polowaobw-c));
       cout<<"Pole trojkata wynosi: "<<pole;
       }


    else{
        cout<<"Nie da sie utworzyc trojkata";
    }


    return 0;
}
