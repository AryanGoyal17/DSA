// Union of 2 sorted arrays -- brute method(using set)

#include <bits/stdc++.h>
using namespace std;

void union_arr(int arr1[], int arr2[], int n1, int n2){

    vector <int> union_vector;

    map <int, int> m1;

    for(int i = 0; i < n1; i++){ //n1logn1
        m1[arr1[i]]++;
    }

    for(int i = 0; i < n2; i++){ //n2log(n1 + n2)
        m1[arr2[i]]++;
    }

     //for read only loops use const, & = pass by reference
    for(const auto &it: m1){ //O(n1 + n2)
        union_vector.push_back(it.first);
    }

    cout << "Union Array: ";
    for(int k = 0; k < union_vector.size(); k++){
        cout << union_vector[k] << " ";
    }   
}

int main(){

    int arr1[] = {1, 2, 2, 3, 4, 4, 5};
    int arr2[] = {3, 3, 4, 4, 4, 5, 6, 7, 8, 8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    union_arr(arr1, arr2, n1, n2);

    //Time complexity = O(n1logn1 + n2log(n1 + n2) + n1 + n2) = approximately O((n1 + n2)log(n1 + n2) + n1 + n2)
    //Space complexity = O(n1 + n2) + O(n1 + n2)
    
    return 0;
}