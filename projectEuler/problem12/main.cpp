#include <iostream>
using namespace std;



int numberdiv(int num){

  int numberOfDivisors = 1;

  for (int i = 2; i <= num; i++)
  {
    int exponent = 0;
    while (num % i == 0) {
        exponent++;
        num /= i;
    }
    numberOfDivisors *= (exponent+1);
  }

  return numberOfDivisors;

}



//unued
unsigned long int numberOfDivisors(long int number , long int f=2, long int count = 1 ){

      if(f <= number){

          int divs = 0;

           if (number % f == 0){
             divs++;

            number /= f;

           }
               count *= (divs+1);

       return numberOfDivisors(number,f+1,count);

      }

      return count;

}


unsigned long int triangleNumbers(long long number, long int i = 0 , long int j=1){

      j = i + j;

      if (j <= number){

       if(numberdiv(j) >= 500){
      cout << j << " " << numberdiv(j) <<"\n";

       }

      }
      else{
        return number;
      }


 return triangleNumbers(number, i+1, j+1);


}




int main(){



triangleNumbers(100000000);

cout << numberOfDivisors(6);
  return 0;
}
