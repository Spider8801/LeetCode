#include <iostream>
using namespace std;

// Implementing Bubble Sort

int main() {
    int arr[]={12, 31,10,5,13,71,22};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=n; i>0;i--){
        for(int j=0;j<n;j++){
            int c=arr[j];
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j+1];
                arr[j+1]=c;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
