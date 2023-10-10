// Approch:1

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    sort(arr.begin(),arr.end());
    if(arr[n-1]-arr[0]==0){
        return -1;
    }else{
    for(int i=n-1;i>0;i--){
        if(arr[i]!=arr[i-1]){
            return arr[i-1];
        }
    }
    }
}


// Approch:2
int findSecondLargest(int n, vector<int> &arr)
{
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // Find largest and second largest element simultaneously.
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        // If an element is smaller than largest and smaller than second largest.
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    if (secondLargest != INT_MIN)
    {
        return secondLargest;
    }
    else
    {
        return -1;
    }
}