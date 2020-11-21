#include <iostream>
#include <cmath>


using namespace std;
double a,b,c, half_circuit, area;


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
       half_circuit = (a+b+c)/2;
       area = sqrt(half_circuit*(half_circuit-a)*(half_circuit-b)*(half_circuit-c));
       cout<<"Pole trojkata wynosi: "<<area;
       }


    else{
        cout<<"Nie da sie utworzyc trojkata";
    }


    return 0;
}
