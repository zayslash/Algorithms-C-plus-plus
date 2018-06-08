#include <iostream>
#include <string>
using namespace std;


int collatzSequence(int number){
  int count = 1;
while (number != 1){
     if(number % 2== 0){
       //cout << number << "-->";
       number = number / 2;
       count++;
     }
     else{
      // cout << number << "-->";
       number = (3 * number) + 1;
       count++;
     }

}

//cout << "1\n";
//cout << count << "\n";
return count;

}




int main() {

int max = 0, hold;

for(int i = 1; i <= 1000000; i++){
 if (max < collatzSequence(i)){
      max = i ;
 }

}
 //collatzSequence(13);
  cout << max;

}
