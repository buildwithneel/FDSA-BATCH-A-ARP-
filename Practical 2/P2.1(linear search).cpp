#include<iostream>
using namespace std;

int main(){
    string plate[500];
    int n,i;
    string t_plate;
    cout<<"enter the size of array: ";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>plate[i];
    }
    cout<<"enter the targate plate: ";
    cin>>t_plate;


    for(i=0;i<n;i++){
        if(plate[i]==t_plate){
            cout<<"the reqd number plate "<<plate[i]<<"is found at index "<<i+1;
        }
    }
}
