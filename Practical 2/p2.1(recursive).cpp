//Recursive approach for linearsearch

#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int t,int index){
    if(index==n){
        return 0;
    }

    if(arr[index]==t){
        return index;

    }
    return linearsearch(arr,n,t,index+1);
}
int main(){
    int a[5]={10,20,60,50,54};
    int value=linearsearch(a,5,50,0);

    if(value == 0 ){
        cout<<"Element not found";
    }else{
        cout<<"element found at index: "<<value;
    }

    return 0;

}
