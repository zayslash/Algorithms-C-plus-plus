#include <iostream>
#include <fstream>

#include <string>


using namespace std;

int get_col(string fileName);
int get_row(string fileName);


string sumThing(string filename, int array_rows, int array_cols){
string arraytry[array_rows][array_cols];
string answer;

int sum =0;

int counter = 0;
fstream file;

  file.open(filename);

    if(file.is_open()){
        string line;
        int x = 0;

         while(file >> line){

          while (x < array_cols){
          arraytry[counter][x] = int(line[x]);
          x++;
          }

           x= 0;
           counter++;
    }
}
string numberString;

///Convert to Integers
int addArray[array_rows][array_cols];

for(int i = 0 ; i < array_rows; i++){

    for (int u = 0; u < array_cols ; u++){

       addArray[i][u] = stoi(arraytry[i][u]);

    }
}
string endAnswer;
int numbertosee;
int sumofeach = 0;
int minus;
string splitnumber;

for (int u = array_cols - 1; u >= 0; u--){

    for (int i = array_rows - 1; i >= 0; i--){

     //cout << addArray[i][49] << " + ";

    sumofeach += addArray[i][u];

  }

numberString = to_string(sumofeach);



if(u == 0){

 for (int i = numberString.length() ; i >= 0; i--){

 endAnswer += numberString[i];

}

 answer+= endAnswer;

}

else{


answer += numberString[numberString.length() - 1];

}

for (int p = 0; p < numberString.length()- 1; p++){
splitnumber += numberString[p];
}

sumofeach = stoi(splitnumber);
splitnumber = " ";

}


//cout << answer << "\n";
string newanswer;



for (int i = answer.length() ; i >= 0; i--){
 newanswer+= answer[i];

}

return newanswer;

}



int main() {



string fileName = "numbers.txt";


string answer = sumThing(fileName,get_row(fileName),get_col(fileName)) ;
cout << sumThing(fileName,get_row(fileName),get_col(fileName)) << "\n";

cout << "\nThe first 10 numbers are: " ;

for (int i = 0 ; i <= answer.length() ; i++){
       if(i == 12){

        break;
       }else
       {
         cout << answer[i];
       }
}



}




int get_col(string fileName){

   ifstream File;
   File.open(fileName);
   char x;
   int count = 0;
   int count_col =0 ;

   string Line;


   if(File.is_open()){

     while (getline(File, Line)  && count != 1){
            count++;

           while(count_col < Line.length()){

             count_col++;
           }
     }
   }


return count_col;

}


int get_row(string fileName){

   ifstream File;
   File.open(fileName);
   char x;
   int count = 0;


   string Line;


   if(File.is_open()){

     while (getline(File, Line) ){
            count++;

     }
   }


return count;

}
