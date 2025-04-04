#include<iostream>
using namespace std;


// print no.s from 1 to n:---

// int main(){
//     int n;
//     int i = 1;
//     cin >> n ;
//     while(i <= n){
//           cout << i;
//           i++;
//     }    
// }

//sum of no.s from 1 to n:---

int main(){
    int i = 1;
    int n;
    int sum = 0;
    
    cin >> n;
    
    while( i<= n){
         sum = sum + i;
          i++ ;
    }  
}