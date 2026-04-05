#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> p1, pair <int, int> p2){

    if(p1.second < p2.second) return true; //in correct order
    if(p1.second > p2.second) return false; //NOT in correct order..
    if(p1.first > p2.first) return true;
    return false;

}

int main(){

//////
    //A--Sorting in ascending order--


    //1-- Array
    int arr1[] = {1,4,2,3};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    sort(arr1, arr1 + size1);

    for(int i = 0; i < size1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    //2-- Vector

    vector <int> v1 = {1,4,2,3};
    sort(v1.begin(), v1.end());

    for(auto i1 = v1.begin(); i1 != v1.end(); i1++){
        cout << *i1 << " ";
    }
    cout << endl;
////////

////////
    //B-- For Sorting only some elements in ascending order.. give the pointers from that element to end pointer(end pt not inclusive)

    //Example -- in A_1-- Array, if we do sort(arr1 + size1 - 3, arr1 + size1 - 1), arr1 becomes 1 2 4 3..
/////////



////////
    //C-- Sorting in a defined manner--

    //Example--

    pair <int, int> arr[] = {{1,3}, {2,2}, {3,2}, {2,2}};

    //Sort the above array of pairs -- sort in ascending order as per second element of pair...
    //                              -- if second element same , sort in descending order as per first element of pair..

    ///Here comparators are used...like the bool comp function written above and in 01_A_Comparator.cpp


    int size = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + size, comp);

    for(int i = 0; i < size; i++){
        cout << arr[i].first << arr[i].second << " ";
    }
    cout << endl;
//////




/////
    //D-- Sorting in descending order..

    sort(arr1, arr1 + size, greater<int>());

    for(int i = 0; i < size1; i++){
        cout << arr1[i] << " ";
    }
    cout << endl; 

    // greater <int> is a built-in comparator written as--

    // bool comp(int a , int b){
    //     return a > b;
    // }
/////


    return 0;
}