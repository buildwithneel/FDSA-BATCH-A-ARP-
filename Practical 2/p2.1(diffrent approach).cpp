#include<iostream>
using namespace std;

int main(){
    string plate[500];
    int n,i;
    string t_plate;
    cout<<"enter the size of array: ";
    cin>>n;
    int pos;
    cout<<"Enter the position where guard left off:";
    cin>>pos;
    cout<<endl;

    for(i=0;i<n;i++){
        cin>>plate[i];
    }
    cout<<"enter the targate plate: ";
    cin>>t_plate;

if(pos==n){
     for(i=0;i<n;i++){
        if(plate[i]==t_plate){
            cout<<"the number plate is found by guard\n";
            cout<<"the reqd number plate "<<plate[i]<<"is found at index "<<i+1;
        }
    }
} else{
    for(i=0;i<pos;i++){
        if(plate[i]==t_plate){
                cout<<"The number plate isn found by guard \n";
        cout<<"the reqd number plate "<<plate[i]<<" is found at index "<<i+1;
        }
    }
    for(i=pos;i<n;i++){
        if(plate[i]==t_plate){
                cout<<"the number plate is found by the helper \n"
            cout<<"the reqd number plate "<<plate[i]<<" is found at index "<<i+1;
        }
    }

}}
