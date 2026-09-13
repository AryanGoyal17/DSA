//Leaders in array[codechef medium] -- brute

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector <int> arr(N, 0);
	
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	}
	
	
	
	for(int i = 0; i < N; i++){
	    bool leader = true;
	    for(int j = i + 1; j < N; j++){
	        
	        if(arr[j] >= arr[i]){
	            leader = false;
	            break;
	        }
	    }
	    
	    if(leader){
	        cout << arr[i] << " ";
	        continue;
	    }
	}

    //Time complexity = O(N^2)
    //Space complexity = O(1)

    return 0;
}
