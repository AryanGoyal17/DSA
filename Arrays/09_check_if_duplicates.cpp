//question -- Checking if there are duplicate elements in array 

//Using nested loops (brute)
//Sorting and checking vicinity (better)
//Using unordered set(optimal)


//Optimal approach --

#include <bits/stdc++.h>
using namespace std;

bool duplicates_present(int arr[], int N){

    unordered_set <int> s1;

    for(int i = 0; i < N; i++){
        if(s1.find(arr[i]) != s1.end()){
            return true;
        }
        else{
            s1.insert(arr[i]);
        }
    }

    return false;
}

int main(){

    int arr[] = {1, 2, 3, 3, 4, 5}; //swap 4 and 5 to check difference in output

    int N = sizeof(arr) / sizeof(arr[0]);

    if(duplicates_present(arr, N)){
        cout << "Duplicate elements are present in the array" << endl;
    }
    else{
        cout << "Duplicate elements are NOT present in the array" << endl;
    }

    //Time complexity - best case = O(1), avg = O(N), worst = O(N^2)[collision happens - very rare]
    //Space complexity - O(N)

    return 0;
}