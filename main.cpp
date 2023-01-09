#include <iostream>

using namespace std;

int main() {
    // Implementing Selection Sort
    int arr[] = {3,5,22,31,12,65,10};

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n;i++)
    {
        for(int j=n; j>i;j--)
        {
            if (arr[i]>arr[j])
            {
                int c=arr[i];
                arr[i]=arr[j];
                arr[j]=c;
            }
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
