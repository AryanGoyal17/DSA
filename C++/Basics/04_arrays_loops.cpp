#include <bits/stdc++.h>
using namespace std;

int main(){

    //Arrays--
    //1-- Elements of same data type.
    //2-- Contiguous memory allocation.

    int arr[5]; //Array declaration

    cout << "Enter array elements: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[4] << endl;

    //Strings-- contiguous memory allocation
    string s = "Aryan";
    int len1 = s.size(); //To find length of string

    //
    // int len2 = arr.size(); // This gives an error
    // 

    int len2 = sizeof(arr) / sizeof(arr[0]);


    s[len1 - 1] = 'z';

    cout << s[len1 - 1] << endl;   
    cout << len2 << endl; 

 

    //Loops -- for, while, do-while are same as in C


    





}