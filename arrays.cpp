#include <bits/stdc++.h>
using namespace std;
//Find The second smallest Element in the array
int secondSmallestElement(int arr[], int n){
    int small = INT_MAX;
    int secSmall = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < small){
            secSmall = small;
            small = arr[i];
        }
        else if(secSmall > arr[i] && arr[i] != small) secSmall = arr[i];
    }
    return secSmall;
}

int main(){
    int n;
    cout<<"Take size of array from user: ";
    cin >> n;
    int arr[n];
    cout <<"The input array is: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = secondSmallestElement(arr,n);
    cout<<"The smallest Element of The array is: "<<ans << endl;
}
