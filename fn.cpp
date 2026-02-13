#include <iostream>
using namespace std;

//function defination 
/*void printHello() {
    cout <<"hello\n";
    return 3;
}

int main() {
    // function call / invoke 
     int val = printHello();
     cout << "val = " << val << endl;
    return 0;
}*/

/*void helloNamaste() {      // phle function define kroooo 
    cout<<"haha namaste\n";

}

int main() {
    helloNamaste();   /// then function call kro bss itna hi concept h 
    return 0;
}

                    // function defination and function call dono alag alag hote */

/*int printHello() {
    cout <<"hello\n";
    return 3;
}

int main() {
    int val = printHello();  // function call
    cout << "val = " << val << endl;
    return 0;
}*/

// sum of two numbers int sum(int a, int b) { // function defination return a + b; } int main() { int x = 10, y = 20; int ans = sum(x, y); // function call cout << "sum is " << ans << endl; return 0; }

/*int sum(int a, int b) {
    int s =  a + b;
    return s;
}

int main() {
    cout<< sum(10, 20) <<endl;

    return 0;
}*/


// calculate the minimum of two numbers 

/*int min(int a, int b) {
    int m = a - b;
    return m;


}

int main() {
    cout << min(10, 20) <<endl;
    return 0;
}*/

/*int multiply(int a, int b) {
    int m = a * b;
    return m;

}

int main() {
    cout << multiply(10, 20) <<endl;
    return 0;
}*/
 /*int sumN(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum; 
}

int main() {
    cout<< sumN(10) << endl; 
     cout<< sumN(100) << endl; 
     cout<< sumN(1000) << endl;
     return 0;
}*/


// factorial of n number

/*int facN(int n) {
    int factorial =1;

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << facN(5) << endl; 
    cout << facN(10) << endl; 
    cout << facN(20) << endl; 
    return 0;
}*/

  /*int sum(int a, int b) {
    a = a + 10;
    b = a + 10;
    return a + b;
  }

   int main() {
    int a = 10; 
    int b = 20;
    cout << sum(a, b) <<endl;

    cout <<"a = " << a << endl;
    cout <<"b = " << b << endl;
     return 0;
   }*/


  /*nt sumOfDigits(int num) {
       int digSum = 0;

       while(num > 0) {
        int lastDig = num % 10; 
        num = num / 10;

        digSum += lastDig; }
         return digSum; } 
         int main() { 
            int num = 12345; 
            cout << "sum of digits of " << num << " is " << sumOfDigits(num) << endl;
             return 0;
       }*/

       //calculate of nCr binomial coefficient for n and r

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;

}
   
int nCr(int n, int r) {
    int num = factorial(n);
    int denom = factorial(r) * factorial(n - r);
    return num / denom;
}

int main() {
    int n = 5, r = 2;
    cout << "nCr of " << n << " and " << r << " is " << nCr(n, r) << endl;
    return 0;
}