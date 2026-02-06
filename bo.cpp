/*#include <iostream>
using namespace std;*/

/*int main() {
      int a = 4;
      int b = 5;

      cout<< " a&b " << (a & b) <<endl;
      cout<< " a|b " << (a | b) <<endl;
      cout<< " ~a " << (~a)     <<endl;
      cout<< " a^b " << (a ^ b ) <<endl;

      cout<< (17>>1) <<endl; 
      cout<< (17>>2) <<endl;
      cout<< (19<<1) <<endl;
      cout<< (19<<2) <<endl;

      int i = 7;

      cout<< (++i) <<endl;
      cout<< (i++) <<endl;
      cout<< (--i) <<endl;
      cout<< (i--) <<endl;

   /* int x = 1;
     int y = a++;
     int z = ++a;

     cout<< y<<endl;
     cout<< z<<endl;*/

       /*int n;
       cout<<"enter the value of n" <<endl;
       cin>>n;
    
       cout<<"printing count from 1 to n" <<endl;
    
      for(int i = 1; i<=n; i++) {
        cout<< i  <<endl;
}
    return 0;
}*/


//int main() {
  /*8int n;
  cout<<"enter the value of n" <<endl;
  cin>>n;

  int sum = 0;

  for(int i = 1; i<=n; i++){
    sum = sum + i;
  }
  cout<< sum <<endl;*/

  /*int n = 20;

 int a = 0;
 int b = 1;
  
 for(int i = 1; i<=n; i++){
     int nextNumber = a+b;
     cout<<nextNumber<<endl;

     a = b;
     b = nextNumber;
 }*/

  /*int n;
  cout<<"enter the value of n" <<endl;
  cin >>n;

  bool isPrime = 1;

  for(int i = 2; i<n; i++) {
     
    if(n%i == 0) {
      isPrime = 0;
      break;
    }
  }
   if(isPrime == 0 ) {
    cout<<"not a prime number"<<endl;

   }
   else{
    cout<<"is a prime number"<<endl;
   }*/


   /*for(int i = 0; i<5; i++) {

       cout<< "hiiiiii"  << endl;
       cout<< "helloooww"  <<endl;

       continue;
       
       cout<< "reply to krdeee" << endl;
   }*/

   /*int a = 3;

   cout<< a <<endl;

   if(true) {
    int a = 5;
    cout << a <<endl;*/

   //}

  //dec to bin conversition//

//}

  //dec to bin conversition//
/*#include<iostream>
#include<math.h>
using namespace std;

int main () {
  int n;
  cin >> n;

  int ans = 0;
  int i = 0;
  while(n != 0){
    int bit = n & 1;

    ans = (bit * pow(10, i )) + ans;

    n = n >> 1;
    i++;
  }

   cout<<"Answere is "<< ans << endl;

}*/

/*#include<iostream>
using namespace std;

int main(){
   int n;
   cin >> n;

   string ans = "";

   while(n != 0){
    int bit = n & 1;
    ans = char(bit + '0') + ans;
    n = n >> 1;

   }

   cout<< "Binary is " << ans << endl;
}*/

/*#include<iostream>
#include<math.h>
using namespace std;

int main() {

  int n;
  cin >> n;
  int i = 0, ans = 0;

  while(n != 0){
    int digit = n % 10;

    if (digit == 1){
      ans =  ans + pow(2, i);
    }
     
   n = n/10;
   i++;


  }

  cout<< ans << endl;

}*/

#include<iostream>
using namespace std;

int main(){
  /*char grade = 't';

  int value = grade;
  cout<< value <<endl;*/

  /*double a = 3.14;

  int value = (int)a;

  cout<< value <<endl;*/

  /*int age;
  cin >> age;

  cout<< "your age is " << age <<endl;
  return 0;*/

   /*int a = 3;
   int b = 4;

  cout<<"a + b = " << (a+b) <<endl;
  cout<<"a - b = " << (a-b) <<endl;
  cout<<"a * b = " << (a*b) <<endl;
  cout<<"a / b = " << (a/b) <<endl;*/

  /*cout<<(5/(double)4) <<endl;*/

  /*cout<< ( ( 3 > 4) || (5 > 2) ) <<endl;*/

   /*int a = 3;
   int b = 4;
   
   int sum = a + b;

    cout<< "sum is " << sum <<endl;*/
  
    int a , b;
    cout<< "enter two numbers" <<endl;
    cin >> a >> b;

    int sum = a + b;
    cout<< "sum is " << sum <<endl;

}






