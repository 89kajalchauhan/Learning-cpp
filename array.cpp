//Going to study arrays in C++ and how to use them
#include <iostream>
using namespace std;
/*int main() {


    // declearing an array of integers with size 5
    /*int arr[5]; // this is an array of integers with size 5

    //initializing the array with values 
    arr[0] = 10; 
    arr[1] = 20;
    arr[3] = 30; 
    arr[4] = 40;
    arr[5] = 50;

    //printing the values of the array
    cout<< arr[0] << endl;  //this will print 10
    cout<< arr[1] << endl;  //this will print 20
    cout<< arr[2] << endl;  //this will print 0 because we have not initialized it
    cout<< arr[3] << endl;  //this will print 30
    cout<< arr[4] << endl;  //this will print 40
    cout<< arr[5] << endl;  //this will print 50 but it is out of bounds and can cause undefined behavior*/

    /*int marks[5] = {10, 20, 30, 40, 50};

    double prices[3] = {10.5, 20.5, 30.5};*/

    /*int siz = 5;
    int marks[size];

    for(int i = 0; i< size; i++) {
        cin >> marks[i]; // this will take input from the user and store it in the array
    }

    for(int i = 0; i< size; i++) {
        cout<< marks[i] << endl; // this will print the values of the array
    }*/

    //find the smallest and the largest of the araay//
    

    /*int nums[5] = {10, 20, 5, 30, 15};
    int smallest = nums[0];
    int largest = nums[0];
    for(int i = 1; i < 5; i++) {
        if(nums[i] < smallest) {
            smallest = nums[i];
        }
        if(nums[i] > largest) {
            largest = nums[i];
        }
    }*/


    /*int nums[] = {5, 15, 22, 1, -4};
    int size  = 6;

    int smallest = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(nums [i] < smallest) {
            smallest = nums[i];
        }
    }
    cout << "smallest = " << smallest << endl;
    return 0;*/



    /*void changeArr(int arr[], int size) {
        cout<< "in function\n";
        for(int i = 0; i < size; i++) {
            arr[i] = 2 * arr[i];
        }
    }
  int main () {
    int arr[] = {1, 2. 3};

    changeArr(arr, 3);

    cout << "in main\n";
     for(int i = 0; i < size; i++) {
            arr[i] = 2 * arr[i];
        }*/

     int linearSearch(int arr[], int sz, int target) {
        for(int i = 0; i < sz; i++) {
            if(arr[i] == target) {
                return 1;
            }
        }
     }

     int main () {
        int arr[] = {4, 2, 7, 8, 1, 2, 3};
        int sz = 7;
        int target = 50;

        cout<< linearSearch(arr, sz, target) << endl;
        return 0;
     }
