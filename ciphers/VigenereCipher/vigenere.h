#ifndef VIGENERE_H
#define VIGENERE_H

#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

unsigned int MOD_Function(int expression , int number){
    return expression % number;

}

unsigned int get_Fist_Line_Length(string filename){

  ifstream file;
  int count =0 ;
  string line;
  file.open(filename);

    if(file.is_open()){

        getline(file, line);
        //return line;
  }
      for (int i = 0 ; i < line.length(); i++){
          if (line[i] == ' '){
      }
          else{

           count++;
      }

 }
return count;

}


unsigned int getFileTextLength(string filename){

  char x;
  int count = 0;
  ifstream file;
  file.open(filename);

   if(file.is_open()){

     while(file >> x){
      count++;
    }

  }
  return count;

}


 signed char convertToChar(int number){
	return (char)number + 'A';
}






string getFirstLine(string filename){
  ifstream file;

  file.open(filename);

    if(file.is_open()){
       string line;
       getline(file, line);
       return line;
  }
  return "NULL";
}



void encryptFile(string filename){
    signed int position = 0;
    ifstream r_File;
    ofstream w_File;

    signed char  x;
    unsigned int i = 0,j = 0;
    string key = getFirstLine(filename);
    unsigned int cypher;
    unsigned int decypher;

    char updateKey[(getFileTextLength(filename) - get_Fist_Line_Length(filename))];

    r_File.open(filename);
    w_File.open("encryptFile.txt");


    while (i < (getFileTextLength(filename) - get_Fist_Line_Length(filename))){
      if (j == key.length()){
        j = 0;
      }
        if(key[j] == ' '){

        }
         else{
              updateKey[i] = key[j];
              //cout << updateKey[i];
              ++i;
         }

      ++j;

    }

    //updateKey[i] = '\0';

    string cypherString;
    string ignoreLine;
    getline(r_File, ignoreLine); // ignores first line;

    if(r_File.is_open()){

       if(w_File.is_open()){

          while (r_File >> x){


            // if(toupper(x) >= 'A' || toupper(x) <='Z'){
                cypher = MOD_Function((toupper(x) + (updateKey[position])), 26);
               // w_File << convertToChar(cypher);
                cypherString += convertToChar(cypher);
                position++;

            // }



           //  position++;


            //

            //decypher = (((x - updateKey[position]+ 26)% 26));
            //cout << convertToChar(decypher);

          }
          w_File << cypherString;
        // cout << position;
        }

      }


    w_File.close();
     r_File.close();

    
    string decypherString;
    int newposition = 0;
    ifstream encrytedFile;
    signed char r;
    encrytedFile.open("encryptFile.txt");

       if(encrytedFile.is_open()){

          while (encrytedFile >> r){

         // if (r >= 'A' && r <= 'Z'){
            decypher = MOD_Function((toupper(r) - (updateKey[newposition]) + 26), 26)  ;
            //cout << convertToChar(decypher) ;
            decypherString += convertToChar(decypher);

            newposition++;



         // }


          // newposition++;

         }

       }
        cout << decypherString;
   }




#endif
