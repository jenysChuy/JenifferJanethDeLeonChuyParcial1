#include <iostream>
// int a = 0;
// int b = 0;
// int num = 0;
//while (num <= 50){
//    if(num % 2 == 0) {
//  b += num;
//  }else{
//  a += num;
//}
//  num ++;
//  }
// std::cout <<"La suma de los numeros pares hasta 50 es :"<< a << std::endl;
// std::cout <<"La sumade de los numeros impares hasta 50  es :"<< b << std::endl; //

using namespace std;
int main() {
    int num;
    for (num = 0; num <= 30; num += 3) {
        if (num > 30 && num % 2 != 0) {
           break;
       }
   }
    std::cout << "El primer numero impar después de 30 es: " << num << std::endl;
    return 0;
}

















