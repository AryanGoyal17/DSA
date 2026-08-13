// Union of 2 sorted arrays -- brute method(using set)

#include <bits/stdc++.h>
using namespace std;

void union_arr(int arr1[], int arr2[], int n1, int n2){

    set <int> s1;

    for(int i = 0; i < n1; i++){
        s1.insert(arr1[i]);
    }

    for(int i = 0; i < n2; i++){
        s1.insert(arr2[i]);
    }

    vector <int> union_vector;

    for(auto it : s1){
        union_vector.push_back(it);
    }

    cout << "Union Array: ";
    for(int i = 0; i < s1.size(); i++){
        cout << union_vector[i] << " ";
    }
}

int main(){

    int arr1[] = {1, 2, 2, 3, 4, 4, 5};
    int arr2[] = {3, 3, 4, 4, 4, 5, 6, 7, 8, 8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    union_arr(arr1, arr2, n1, n2);

    //Time complexity = O(n1logN + n2logN + n1 + n2) {worst}
    //Space complexity = O(n1 + n2) {worst}
    
    return 0;
}