/*#include<iostream>
using namespace std;

int main(){*/
    /* example - 01
    int n;
    cin>>n;

    int i = 1;
    
    while(i<=n){

        int j = 1;
        while(j<=n) {
            cout<<"*";
            j = j + 1;
        }

        cout<<endl;
        i = i + 1;
    }*/


    /*question - 01
    int n;
    cin>>n;

    int i = 1;
     
    while(i<=n) {

        int  j = 1;
        while(j<=n) {
            cout << i;
            j = j + 1;
        }
        cout<<endl; 
        i = i + 1;
    }*/


   /*question - 02
   int n;
   cin>>n;

   int i = 1;

   while(i<=n) {
    int j = 1;
    while(j <= n){
        cout<< j;
        j = j + 1;
    }
    cout<<endl;
    i = i + 1;
   }*/


  /* question - 03
  int n;
  cin>>n;

  int i = 1;
  while(i <= n){
    int j = 1;
    while(j <= n){
        cout<<n - j + 1;
        j = j + 1;

    }
    cout<<endl;
    i = i + 1;
  }*/
  

  /*question - 04*/
  /*int n;
  cin>>n;

  int i = 1;
  int count = 1;
  while(i<=n){
     
    int j  = 1;
    while(j<=n) {
        cout<<count<<" ";
        count =  count + 1;
        j =  j + 1;

    }
    cout<<endl;
    i = i + 1;
  }*/
  

  /*question - 07
  int n;
  cin>>n;


  int row = 1;

  while(row<=n){

    int coloum = 1;
    while(coloum<=row){
        cout<<coloum;
        coloum = coloum + 1;

                                               /*g++ pattern.cpp -o pattern*/
  /*}
   cout<<endl;
   row = row + 1;

}


}*/

#include<iostream>
using namespace std;


int main(){
/*question-06
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){

        int col = 1;
        while(col <= row) {
            cout<< row;
            col = col + 1;
        }

        cout<<endl;
        row = row + 1;
    }*/



    /*question -09
     int n;
     cin>>n;

     int row = 1;
     while(row <= n){
      
        int col = 1;
        int value = row;

        while(col<=row){
            cout<<value;
            value = value + 1;
            col =  col + 1;
        }
        cout<<endl;
        row = row + 1;
     }*/
        /*question -10*/
      /*int n;
      cin>>n;

      int i =  1;
      while(i <= n){
        int j = 1;
         
        while(j<= i){
           cout<<(i - j + 1)<<" ";
           j = j + 1;
        }

        cout<<endl;
        i = i + 1;
      }*/
   
      /*question = 11
         
       int n;
       cin>>n;

       int i = 1;
       while(i<=n){
        int j =  1;
        
          while(j<=n){
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
            j = j + 1;
          }
          cout<<endl;
          i = i + 1;

       }*/



       /*question = 12
        int n;
       cin>>n;

       int i = 1;
       while(i<=n){
        int j =  1;
        
          while(j<=n){
            char ch = 'A' + j - 1;
            cout<<ch<<" ";
            j = j + 1;
          }
          cout<<endl;
          i = i + 1;
       
        }*/

        /* question = 14
        int n;
        cin>>n;

        int i = 1;

        while(i<=n){
             
            int j =  1;
            while(j<=n){
                char ch = 'A' + i + j - 2;
                cout<<ch<<" ";
                j = j + 1;

            }
            cout<<endl;
            i = i + 1;
        }*/

        /*int n;
        cin>>n;

        int i = 1;
        while(i<=n){

            int j = 1;
            while(j<=i){
                char ch = ('A' + i + 1);
                cout<<ch<<" ";
                j = j  + 1;
            }
            cout<<endl;
            i = i + 1;
        }*/
     
        /*question =17
        int n;
        cin>>n;

        int i = 1;
        while(i<=n){

            int j = 1;
            while(j<=i){
                char ch = ('A' + i + j - 2);
                cout<<ch<<" ";
                j = j  + 1;
            }
            cout<<endl;
            i = i + 1;
        }*/


        /*question - 18
       int n;
       cin>>n;

       int i = 1;
       
       while(i<=n){
        int j = 1;
        char start = 'A' + n - i;

        while(j<=i){
            cout<<start<<" ";
            start = start + 1;
            j = j + 1;
        }
          cout<<endl;
          i = i + 1;
       }*/
       
      /*question - 19
       int n;
       cin>>n;

       int i = 1;

       while(i<=n){

        //space print krlooo//
        int space = n - i;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        //stars print krlo//
        int j = 1;
        while(j<=i){
            cout<<"*";
            j = j + 1;
        }
         cout<<endl;
         i = i + 1;
       }*/
        
       int n;
       cin>>n;

       int i = 1;

       while(i<=n) {
        
        //printing space
        int space = n - i;
        while(space){
            cout<<" ";
            space = space  - 1;
        }

        //printing triangle 1

        int j = 1;
        while(j<=i){
            cout<<j;
            j = j + 1;
        }

        // printing 2nd triangle
       int start = i - 1;
       while(start){
        cout<<start;
        start = start - 1;
       }
        cout<<endl;
        i =  i + 1;
       } 












         
    }








    










