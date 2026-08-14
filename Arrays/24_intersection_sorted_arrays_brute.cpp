// Intersection of 2 sorted arrays -- brute

#include <bits/stdc++.h>
using namespace std;

void intersection_arr(int arr1[], int arr2[], int n1, int n2){

    vector <int> intersect;

    vector <int> visited(n2, 0);
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j] && visited[j] == 0){
                intersect.push_back(arr2[j]);
                visited[j] = 1;
                break;
            }

            if(arr1[i] < arr2[j]){
                break;
            }
        }
    }

    cout << "Intersection Array: ";
    for(int k = 0; k < intersect.size(); k++){
        cout << intersect[k] << " ";
    }

}

int main(){

    int arr1[] = {1, 2, 2, 3, 4, 4, 5};
    int arr2[] = {3, 3, 4, 4, 4, 5, 6, 7, 8, 8};

    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int n2 = sizeof(arr2)/sizeof(arr2[0]);

    intersection_arr(arr1, arr2, n1, n2);

    //Time complexity = O(n1*n2)
    //Space complexity = O(min(n1, n2)) -- o/p space, auxiliary space = O(n2)

    return 0;
}