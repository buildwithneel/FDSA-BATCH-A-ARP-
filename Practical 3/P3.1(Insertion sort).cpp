#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the num of elements in array: ";
    cin>>n;
    int arr[n];
    int i,j;
    cout<<"Enter the elements of an array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=1;i<n;i++){
        int temp=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"The sorted array is : ";
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    return 0;

}
