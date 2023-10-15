#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
    int arrSize=arr.size();
    int sum=0;
    for(int i=0;i<arrSize;i++){
        sum=sum+arr[i];
    }
    int rightSum=sum;
    int leftSum=0;
    for(int i=0;i<arrSize;i++){
        rightSum=rightSum-arr[i];
        if(rightSum==leftSum){
            return i;
        }
        leftSum=leftSum+arr[i];
    }
    return -1;
}