#include <bits/stdc++.h>
using namespace std;

int minimum(int num1, int num2){
    int num3 = min(num1, num2);
    return num3;
}

int pass_ref(int arr[], int &n){ //Arrays are passed automatically by reference..
    arr[0] += 100;
    return arr[0];
}

int main(){

//Functions -- same as in C

//NOTE:
//1-- max and min are inbuilt functions which can be used with math.h library..

//2-- Types of functions--
// A-- void
// B-- return
// C-- parameterised and non-parameterised

//IMPORTANT--- 3--- if a function(not void) is used, we MUST return something otherwise it returns garbage value..


//Example -- program to find min of 2 numbers

int num1, num2;
cout << "Enter 2 numbers: ";
cin >> num1;
cin >> num2;

int result = minimum(num1, num2);
cout << "Minimum: " << result << endl;


//4-- Pass by value and Pass by reference

//In pass by value -- a copy of the variable is sent to the function(done in minimum function)
//In pass by reference(except for arrays!) -- The function operates on the original variable.. in parameter of function attach an &(address of) before variable name..

//Arrays are passed by reference by default...

int n;

cout << "Enter no of elements in array: ";
cin >> n;

int arr[n], i;

cout << "Enter array elements: ";
for(i = 0; i < n; i++){
    cin >> arr[i];
}

cout << "Value from function: " << pass_ref(arr, n) << endl;
cout << "Value after function: " << arr[0] << endl;

return 0;
}