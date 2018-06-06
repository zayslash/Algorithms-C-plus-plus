#include <iostream>
#include <fstream>

#include <string>


using namespace std;


string sumThing(string filename){
string arraytry[100][50];
string answer;

long long int sum =0;

int counter = 0;
fstream file;

  file.open(filename);

    if(file.is_open()){
        string line;
        int x = 0;

         while(file >> line){

          while (x < 50){
          arraytry[counter][x] = int(line[x]);
          x++;
          }

           x= 0;
           counter++;
    }
}
string numberString;

///Convert to Integers
int addArray[100][50];

for(int i = 0 ; i < 100; i++){

    for (int u = 0; u < 50 ; u++){

       addArray[i][u] = stoi(arraytry[i][u]);

    }
}
string endAnswer;
int numbertosee;
int sumofeach = 0;
int minus;
string splitnumber;

for (int u = 49; u >= 0; u--){

    for (int i = 99; i >= 0; i--){

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
splitnumber = "";

}


//cout << answer << "\n";
string newanswer;



for (int i = answer.length() ; i >= 0; i--){
 newanswer+= answer[i];

}

return newanswer;

}



int main() {
string answer = sumThing("numbers.txt") ;
cout << sumThing("numbers.txt") << "\n";

cout << "\nThe first 10 numbers are: " ;

for (int i = 0 ; i <= answer.length() ; i++){
       if(i == 12){

        break;
       }else
       {
         cout << answer[i];
       }
}

cout << "\n";


}
