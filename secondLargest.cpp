#include <bits/stdc++.h>
using namespace std;
//Find the second largest element in the array.
int secondLargestElement(vector<int>& nums){
    int n = nums.size();
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    for(int i = 0; i < n; i++){
        if(large < nums[i]){
            secondLarge = large;
            large = nums[i];
        }
        else if(secondLarge < nums[i] && nums[i] != large) secondLarge = nums[i];
    }
    return secondLarge;
}

int main(){
    int n;
    cout<<"Take size of input array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"The input array is: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = secondLargestElement(arr);
    cout<<"The second largest element in the array :"<<ans<<endl;
}