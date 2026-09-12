// Remove duplicates from unsorted array and maintain order ---- optimal

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int N;
	cin >> N;
	
	vector <int> arr(N);
	
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	}
	
	
	unordered_set <int> s1;
	
	for(int i = 0; i < N; i++){
	    if(s1.find(arr[i]) == s1.end()){
	        s1.insert(arr[i]);
	        cout << arr[i] << " ";
	    }
	}

    //Time complexity = O(N)
    //Space complexity = O(N)

}
