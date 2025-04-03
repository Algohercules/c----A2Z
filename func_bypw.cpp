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

int main(){
    int p = 5;
    int &q = p;

    q++;
    cout << p << endl;
    return 0;
}

