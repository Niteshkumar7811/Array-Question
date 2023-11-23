#include <bits/stdc++.h>
using namespace std;

int smallestElement(vector<int> &nums){
    int n = nums.size();
    int small = INT_MAX;
    for(int i = 0; i < n; i++){
        if(nums[i] < small) small = nums[i];
    }
    return small;
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

    int ans = smallestElement(arr);
    cout<<"The smallest element in the array is : "<<ans<<endl;
}