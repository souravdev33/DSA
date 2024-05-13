#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;   // temporary array
    int left=low;   // starting index of left half of arr
    int right=mid+1;  // starting index of right half of arr  

    while(left<=mid and right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
        
    }
    
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){ // This is for transfering temp array to original array
        arr[i]=temp[i-low];
    }

}

void Merge_sort(vector<int>&arr,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    Merge_sort(arr,low,mid); // This is for 1st part of divide
    Merge_sort(arr,mid+1,high); // This is for the second part of divide
    merge(arr,low,mid,high);   //This is for merging the array
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Before sorting the array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Merge_sort(arr,0,n-1);
    cout<<"After sorting the array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}