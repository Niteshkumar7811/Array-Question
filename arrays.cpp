#include <bits/stdc++.h>
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
