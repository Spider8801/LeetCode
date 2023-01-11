#include <iostream>

using namespace std;

//Implementing Insertion Sort

int main() {

    int arr[]={7,12,71,31,11,53,4};
    int n= sizeof(arr)/ sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int c= arr[i];
        int index=-1;
        for(int j=i;j>=0;j--){
            int temp=arr[i-index];
            if (arr[i-index]<arr[j]){
                arr[i-index]=arr[j];
                arr[j]=temp;
                //c=arr[j];
            }
            index++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
