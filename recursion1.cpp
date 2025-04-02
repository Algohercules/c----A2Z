#include<bits/stdc++.h>
using namespace std;


//recursion :-- when a function calls itself  until a specified condition is meet


// void demo_function(){
//     cout << "1" << endl;
//     demo_function();
// }



// int main(){
//     demo_function();
// }



//stack overflow :-- numerous function cals are waiting due to recursion

//specified condition :--

// base condition :-- the condition at which we are going to stop

// int cont = 0;

// void  adarsh(){
//     cout << cont <<endl;
//     cont++ ;
//     adarsh();
// }
// int main(){
//     adarsh();
// }


//there may be a single or multiple base conditions 

// int cont = 0;

// void adarsh(){
//     if (cont == 4){
//         return;
//         cout << cont << endl;
//         cont ++ ;
//         adarsh();
//     }
// }
// int main(){
//     adarsh();
// }


//recursion by love babbar :---


// big complex problem ka solution depend krta hai same type  ki chhoti problem par to recursion use hota hai


int factorial(int n){
    if (n==0)
         return 1;

         int chhoti = factorial(n-1);
         int badi = n * chhoti;
         return badi;

}

int main(){
   int n;
   int ans = factorial(n);
   cout << ans << endl;
   return 0;

}

