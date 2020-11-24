#include <iostream>
#include <fstream>
using namespace std;




int main()
{
    cout<<"Program oblicza sume i srednia sposrod liczb z pliku tekstowego"<<endl;

    int amount=0;
    double number, sum=0, average=0;

    fstream my_file;
    fstream my_save;

    my_file.open("liczby_1.txt",ios::in);
    if(my_file.good())
        {
           while(!my_file.eof())
           {
              if(my_file>>number)
              {
                  amount++;
                  sum+=number;
              }

           }

            average = sum/amount;


         cout<<"Suma liczb wynosi: "<<sum<<endl;
         cout<<"Ich srednia wynosi: "<<average<<endl;


        }
    else
        cout<<"Blad"<<endl;
    my_file.close();
    my_save.close();
return 0;
}
