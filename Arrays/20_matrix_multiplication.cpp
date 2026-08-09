//Lab-Assignment-1, question - 4(B)
// b. Find the matrix multiplication

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr1[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    
    int arr2[3][2] = {{1,2},
                      {3,4},
                      {5,6}};

    int multiplied_arr[2][2] = {0};

    int i = 2; //rows in 1 = rows in output
    int j = 3; //columns in 1 = rows in 2
    int k = 2; //columns in 2 = columns in output

    for(int r = 0; r < i; r++){
        for(int c = 0; c < k; c++){
            for(int l = 0; l < j; l++){
              multiplied_arr[r][c] += arr1[r][l] * arr2[l][c];
            }
        }
    }

    for(int r = 0; r < i; r++){
        for(int c = 0; c < k; c++){
            cout << multiplied_arr[r][c] << " ";
        }   
        cout << endl;
    }

    //This is optimal (if we ignore some advanced computer science algo's which reduce complexity by a small amount but take up more space)
    //Time complexity = O(N^3)
    //Space complexity = O(N^2)

    return 0;
}
