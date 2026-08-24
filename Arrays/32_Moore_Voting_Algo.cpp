// Majority Element - I (optimal)

// Moore's Voting Algorithm

#include <bits/stdc++.h>
using namespace std;

int majorityElem(vector <int> &arr, int n){

    int elem;
    int count = 0;

    for(int i = 0; i < n; i++){
        if(count == 0){
            elem = arr[i];
            count++;
        }
        
        else if(arr[i] == elem){
                count++;
        }
        else{
                count--;
        }
    }

    int count_check = 0;

    for(int i = 0; i < n; i++){ //This loop is not necessary if its mentioned that array will have a majority element for sure
        if(arr[i] == elem){
            count_check++;
        }
    }

    if(count_check > (n/2)) return elem;
    else return -1;
}

int main(){

    vector <int> arr = {2, 2, 1, 1, 2, 1, 2};
    int n = arr.size();

    int result = majorityElem(arr, n);

    cout << "Majority Element = " << result << endl;

    //Time complexity - O(2N) , {if its mentioned that majority elem will surely exist then - O(N)}
    //Space complexity - O(1)

    return 0;
}