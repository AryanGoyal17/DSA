// Union of 2 sorted arrays -- brute method(using set)

#include <bits/stdc++.h>
using namespace std;

void union_arr(int arr1[], int arr2[], int n1, int n2){

    vector <int> union_vector;

    int i = 0; 
    int j = 0;

    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j]){
            if(union_vector.size() == 0 || union_vector.back() != arr1[i]){
                union_vector.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(union_vector.size() == 0 || union_vector.back() != arr2[j]){
                 union_vector.push_back(arr2[j]);
            }   
            j++;  
        }
    }

    while(j < n2){
        if(union_vector.size() == 0 || union_vector.back() != arr2[j]){
            union_vector.push_back(arr2[j]);
        }
        j++;
    }

    while(i < n1){
        if(union_vector.size() == 0 || union_vector.back() != arr1[i]){
            union_vector.push_back(arr1[i]);
        }
        i++;
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

    //Time complexity = O(n1 + n2)
    //Space complexity = O(n1 + n2)
    
    return 0;
}