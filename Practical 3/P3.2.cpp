#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of an array: ";
    cin >> n;
    int i,j;
    int arr[n];
    int temp;
    cout<<"Enter the elements(only 0,1 &2 are allowed):";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n ; i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array";
    for(i=0;i<n;i++){
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}
