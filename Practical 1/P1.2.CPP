#include<iostream>
using namespace std;

int main() {
    int arr[100];
    int n;
    cin>>n;
    int i, j;
    int coun;
     cout<<"enter the element:";
    for (i=0;i<n;i++){
      cin>>arr[i];
    }

    for(i = 0; i < n; i++) {
        coun = 0;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                coun++;
            }
        }

        if(coun >= 1) {
            cout << arr[i] << " duplicated " << coun+1 << " times" << endl;
        }
    }

    return 0;
}
