#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;


char convertToChar(int chartochange){


  return chartochange + 'A';
}


unsigned int MOD_Function(int number, int divisor){

return (number % divisor);



}




void Encrypt(string fileName, int shift){


char x;
char  cipher;

ofstream outputFile;
outputFile.open("encryptedFile.txt");


fstream file;
file.open(fileName);

if(file.is_open()){

   if(outputFile.is_open()){
      while (file >> x) {

       // cout << char(x + shift) ;

          cipher = char(x + shift);
          outputFile << cipher;

     }


  }
}

file.close();

}



void Decrypt(string fileName, int shift){

  char x;
  char  cipher;

  fstream file;
  file.open(fileName);

  if(file.is_open()){


        while (file >> x) {

         // cout << char(x + shift) ;

            cipher = char(x - shift);
            cout << cipher;

       }

  cout << "\n";

  }

  file.close();

}







int main(){
unsigned int shift;




cout << "┌─┐┌─┐┌─┐┌─┐┌─┐┬─┐  ┌─┐┬┌─┐┬ ┬┌─┐┬─┐\n";
cout << "│  ├─┤├┤ └─┐├─┤├┬┘  │  │├─┘├─┤├┤ ├┬┘\n";
cout << "└─┘┴ ┴└─┘└─┘┴ ┴┴└─  └─┘┴┴  ┴ ┴└─┘┴└─\n\n";

cout << "\nEnter the amount of Shifts you want to shift each letter by from 1 - 25: ";
cin >> shift;


Encrypt("info.txt" ,shift);

cout << "This is your Decrypted Text :\n";

Decrypt("encryptedFile.txt",shift);


cout << "\nTo see encrytped text, open encryptedFile.txt in your folder directory\n\n\n";




}
