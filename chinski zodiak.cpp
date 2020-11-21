#include <iostream>
using namespace std;



int main(){
    int year, zodiac;
    int repeatability = 12;

    cout<<"Program podaje chiski znak zodiaku"<<endl;

    cout<<"Podaj rok urodzenia: ";
    cin>>year;

    zodiac = year % repeatability;   //zwraca nam reszte z dzielenia przez w tym przypadku 12


    switch(zodiac){
          case 0:
            cout<<"Twoim chinskim znakiem zodiaku jest malpa";
          break;

          case 1:
            cout<<"Twoim chinskim znakiem zodiaku jest kogut";
          break;

          case 2:
            cout<<"Twoim chinskim znakiem zodiaku jest pies";
          break;

          case 3:
            cout<<"Twoim chinskim znakiem zodiaku jest swinia";
          break;

          case 4:
            cout<<"Twoim chinskim znakiem zodiaku jest szczur";
          break;

          case 5:
            cout<<"Twoim chinskim znakiem zodiaku jest bawol";
          break;

          case 6:
            cout<<"Twoim chinskim znakiem zodiaku jest tygrys";
          break;

          case 7:
            cout<<"Twoim chinskim znakiem zodiaku jest krolik";
          break;

          case 8:
            cout<<"Twoim chinskim znakiem zodiaku jest smok";
          break;

          case 9:
            cout<<"Twoim chinskim znakiem zodiaku jest waz";
          break;

          case 10:
            cout<<"Twoim chinskim znakiem zodiaku jest kon";
          break;

          case 11:
            cout<<"Twoim chinskim znakiem zodiaku jest koza";
          break;


          default: cout<<"Nie ma takiego roku "<<endl;

    }


    return 0;
}










