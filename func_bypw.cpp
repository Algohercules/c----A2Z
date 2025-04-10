#include<iostream>
using namespace std;

// void welcome(){
//     cout<< "welcome to pw"
// }

// int main(){
//      welcome();
// }



// int  welcome(){
//     cout<< "welcome to pw" <<endl;
//     return 1;
// }

// int main(){
//     int ans;
//      ans = welcome();
//      cout << ans <<endl;
// }

// int add(int num1, int num2){
//      int sum = num1 + num2;
//      return sum;
// }


// int main(){

//     int a;
//     int b;
//     int ans;
//     cin >> a >> b;

//     ans = add(a,b);
    
//     cout << ans <<endl;
    
//     return 0;
// }



//scope :--
// part of program from where variable is accessible

/*
local variables:---
the variables that are declared inside the function or block


global variables:---
variables that exist throughout the whole program


what if there exists a local as well as global variable with the same name
local >> global  (precedence)


scope resolution operator:---
(::) it is used to access the global variable instead of local from a bloclk of code


formal and actual parameters:---
      wo parameters jinhe hum function call ke time pe pass krte haun are called as actual parameters  
      wo parameters jo function declaration ke time pe define hote hain are known as formal parameters
     
*/



//pass by value:---
//copy is created

// void change_value(int z){
//     z = 100;
// }
 

// int main(){
//     int a = 5;
//     change_value(a);
//     cout << a ;
// }


// pass by reference :---

// int main(){
//     int p = 5;
//     int &q = p;

//     q++;
//     cout << p << endl;
//     return 0;
// }



// power :---

// int power(int a , int b){
     
//       int ans = 1;
//       for(int i = 1; i<=b; i++){
//             ans = ans * a;
//       }

//       return ans;
// }


// int main(){

//       int a , b;
//       cin >> a >> b;

//       int answer = power(a,b);
//       cout << answer << endl;

// }


// even odd program :---

// bool iseven(int a){

//       //odd

//       if(a&1){
//             return 0;
//       }

         //even

//       else{
//             return 1;
//       }
// }


// int main(){

//       int num;
//       cin >> num;
//        if(iseven(num)){
//             cout << "number is even" << endl;
//        }
//        else{
//             cout << " number is odd" << endl;
//        }

// }




// permutation and combination:---

// int factorial(int n){
//       int fact = 1;

//       for(int i = 1; i<=n; i++){
//             fact = fact * i;
//       }
//       return fact;
// }

// int nCr(int n, int r){

//        int num = factorial(n);
//        int denom = factorial(r) * factorial(n-r);

//        int ans = num / denom ;
//        return ans;
// }

// int main(){
//       int n,r;
//       cin >> n >> r;
//       cout << nCr(n,r) <<endl;
// }




//print counting

// void printCounting(int n){
    
//       for(int i =1; i<=n; i++){
//             cout << i <<endl;
//       }
// }

// int main(){
//        int n;
//        cin >> n;

//        printCounting(n);
//        return 0;
// }




//checking prime number

// bool isPrime(int n){


//        //divide ho gya hai, not a prime no.
//        for(int i=2; i<=n; i++){
//             if(n%i == 0){
//                   return 0;
//             }
//        }
//        return 1;
// }

// int main(){
      
//       int n;
//       cin >> n;
//       if(isPrime(n)){
//             cout << " is a prime number" <<endl;
//       }
//       else {
//             cout << "is not a prime no." <<endl;
//       }
// }

//ab nahio karunga