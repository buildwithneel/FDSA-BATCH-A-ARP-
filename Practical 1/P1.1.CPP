#include <iostream>
using namespace std;

int main(){
    int i,n,d;


    cout<<"Enter the number of elements in array: ";
    cin>>n;
    
    int arr[n];

    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cin>>d;
    for(i=d;i<n;i++){

        cout<<arr[i] ;
        cout<<" ";
    }
    for(i=0;i<d;i++){
        cout<<arr[i];
        cout<<" ";
    }
    return 0;
}
