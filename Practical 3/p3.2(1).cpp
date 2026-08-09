#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of an array: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    int c0=0,c1=0,c2=0;

    for(i=0;i<n;i++){
        if(arr[i]==0) c0++;
        else if(arr[i]==1) c1++;
        else if(arr[i]==2) c2++;
        else cout<<"Error!!";
    }
    int index=0;
    while(c0--){
        arr[index++]=0;
    }
    while(c1--){
        arr[index++]=1;
    }
    while(c2--){
        arr[index++]=2;
    }
    cout<<"The final sorted array: ";
    for(i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}