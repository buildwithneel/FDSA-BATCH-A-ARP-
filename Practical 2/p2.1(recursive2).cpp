//Recursive approach of binary search

#include<iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int t){
    if(low>high){
        return 0;
    }
    int mid=(low+high)/2;
    if(arr[mid]==t){
        return mid;
    }
    else if(arr[mid]<t){
        return binarysearch(arr,low+1,high,t);
    }else{    return binarysearch(arr,low,high-1,t);
}}

int main(){

    int a[5]={10,20,30,40,50};
    int val=binarysearch(a,0,4,30);

    if(val==0){
        cout<<"element not found";
    }else{
        cout<<"element found at index:"<<val;
    }


    return 0;

}
