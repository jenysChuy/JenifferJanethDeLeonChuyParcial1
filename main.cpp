#include <iostream>

using namespace std;
int main() {
     int a = 0;
     int b = 0;
     int num = 0;
     while (num <= 50){
         if(num % 2 == 0) {
        b += num;
         }else{
        a += num;
    }
    num ++;
    }
     std::cout <<"La suma de los numeros pares hasta 50 es :"<< a << std::endl;
     std::cout <<"La sumade de los numeros impares hasta 50  es :"<< b << std::endl;
     return 0;
}





















