//Ittretive approach for binary search

#include<iostream>
using namespace std;

int main(){

    int arr[400];
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int i;
    cout<<"Enter elements(in sorted order): ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Your target: ";
    cin>>target;

    int low=0;
    int high=n-1;
    int mid;

    while(low<=high){

        mid=low+((high-low)/2);

        if(arr[mid]==target){
            cout<<"element found at index "<<mid;
            break;
        }
        else if (arr[mid]<target){
            low=mid+1;
        }else {
            high=mid-1;
        }
    }



    return 0;

}
