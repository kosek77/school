#include <iostream>
#include <fstream>
#include <stdio.h>



using namespace std;

bool palindrom(string word)
{
    string reverse_word;
    int length_word = word.length();


    for(int i = 0; i < length_word; i++)
    {
        reverse_word += word[length_word - i - 1];
    }


    return word == reverse_word;
}

int main()
{

    string word;


    ifstream file("slowa.txt");
    ofstream file_save("palindromy.txt");


    if (file.good())
      {

                while (!file.eof())
                {

                    if (file>>word)
                    {
                        if (palindrom(word) == true)
                        {
                            cout<<word<<endl;
                            file_save << word << endl;
                        }
                    }

                }
            }

       else cout<<"Nie udalo sie otworzyc pliku"<<endl;


      file.close();
      file_save.close();


    return 0;
}
