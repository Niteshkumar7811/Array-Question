#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums){
    int n = nums.size();
    int large = INT_MIN;
    for(int i = 0; i < n; i++){
        if(nums[i] > large) large = nums[i];
    }
    return large;
}

int main(){
    int n;
    cout<<"Take the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Take input in the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = largestElement(arr);
    cout<<"The smallest element in the array is : "<<ans<<endl;
}