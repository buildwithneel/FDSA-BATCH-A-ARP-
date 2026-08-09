//Selection sort
//Practical 3.1

#include<iostream>
using namespace std;

int main(){
    int n,i,j,temp,min;

    cout<<"Enter the size of an array(except 0):";
    cin>>n;

    int arr[n];

    cout<<"Enter the element of the arr: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted array:";
     for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}
