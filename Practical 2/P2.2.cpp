//ittretive approach for Linear search

#import<iostream>
using namespace std;

int main(){

    string arr[500];
    int n;
    int i;

    string target;

    cout<<"Enter the size of array: ";
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter target string:";
        cin>>target;

    for(i=n/2;i>0;i--){
        if(arr[i]==target){
            cout<<"The book id "<<arr[i]<<" found at left side at "<<i+1;
        }
    }for(i=n/2;i<n;i++){
        if(arr[i]==target){
            cout<<"The book id "<<arr[i]<<" found at Right side at "<<i+1;
        }
    }
}
