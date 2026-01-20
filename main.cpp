
   /* cout << "Namaste duniya" <<endl; 
   int a = 2.0/5;
   cout << a <<endl;

   cout << 2.0/5 << endl;. */

   /* int a = 2;
    int b = 3;

   bool first = (a == b);
   cout << first << endl;
      
    bool second = (a <= b);
    cout<< second << endl;

     bool third = (a >= b);
    cout<< third << endl;

     bool fourth = (a != b);
    cout<< fourth << endl; 

     int a = 21;
     cout << !a <<endl; */


    /*if-else , while loop*/

   //int a ;
   //cin>>a;

   /*cout<<"Value of n is:" << n <<endl; */


  /*if(a>0) {
    cout << "A is positive" <<endl;
  }

  else{
    cout<< "A is negative" <<endl;
  } */

   /*int a , b;

   cin>> a>> b;

   cout<<"value of a and b is "  <<a  <<b <<endl; */

  /*this is the progrm that tells which num is greater*/
   
  /*int a , b;
  cout<<"Enter the value of a" <<endl;

 cin>>a;
  cout<<"Enter the value of b" <<endl;
  cin>>b;
  
  if(a>b) {
    cout<<"A is greater" <<endl;

  } 
  
  if(b>a) {
    cout<<"B is greater" <<endl; 
  } */
  


  /*this is the program t check wheather the num is  +ve -ve or zero and 
  i write it by myself*/

 /*int a;

  cout<<"Enter the value of a" <<endl;
  cin>>a;

 
 if(a>0) {
    cout<<"A is positive num" <<endl;

  }
  
  if(a<0) {
    cout<<"A is negative num" <<endl;
  }

  if(a==0) {
    cout<<"A is zero" <<endl;
  } */

    /*here is another problem*/


    
    /*char a;
    cout<<"Enter the value of a" <<endl;
    cin>>a;

    if(a>=a && a<=z){
      cout<<"a is loercase " <<endl;
    }
     
    else if (a>=A && a<=Z){
      cout<<"A is uppercase" <<endl;
    }
    
    if(a>=0 && a<=9) {
      cout<<"a is num" <<endl;
    }*/

   /*int n;
   cin>>n;

   int i = 1;
   while(i<=n) {
    cout<<i;
    i = i++;
   } */
   // this is the question where we find out the sum of n numbers //

  /* int n;
   cin>n;

   int i = 1;
   int sum = 0;

   while (i <= n) {

    sum = sum + i;
    i = 1 + i;

   }

    cout<<:"value of sum is" <<sum <<endl; */



   #include <iostream> 
  using namespace std;
   /*int main() {
    int n;
    cin>>n;

    int i = 1;
     int sum =  0;

    while(i <= n) {
       sum = sum + i;
       i = 1 + i;
    }

    cout<<"value of sum"<<sum<<endl;*/
     
    int main(){
    int n;
    cin >> n;

    int i = 2;
    while(i<n) {
      if (n%i == 0){
        cout<<"not prime number"<<endl;
      }
       i = i + 1;

    }















  
    return 0;


}