// Selection Sort = Swaps the minimum(for asc order)/maximum(for desc order) element in the array...

#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector <int>& v1, int n){

    for(int i = 0; i <= n-2; i++){

        int min = i;

        for(int j = i + 1; j <= n-1; j++){ //int j = i also works, i + 1 done to do 1 less comparison
          if(v1[j] < v1[min]) min = j; //For descending order, change < to >.. [it will still be called Selection Sort]
        } 

        swap(v1[i], v1[min]); //a temp variable can also be used to swap
    }

}

int main(){

    int N;
    cout << "Enter the no of elements in the array: ";
    cin >> N;

    vector <int> v1(N);

    cout << "Enter array elements: ";
    for(int i = 0; i < N; i++){
        cin >> v1[i];
    }

    selectionSort(v1, N);

    cout << "Sorted array: ";
    for(int i = 0; i < N; i++){
        cout << v1[i] << " ";
    }

    //Time complexity = O(N^2)[approx]
    //Space complexity = O(N) - input space, O(1)[auxiliary space];
}