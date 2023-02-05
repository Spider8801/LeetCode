#include <iostream>

using namespace std;

//void Print9(int n){
//    if(n<1){
//        return;
//    }
//    cout<<n<<endl;
//    Print9(n-1);
//
//}

//void Print19(int n){
//    if(n<1){
//        return;
//    }
//    Print19(n-1);
//    cout<<n<<endl;
//}

int SumN(int n,int *sum){

    int sum_val=*sum;
    cout<<sum_val<<" ";
    sum_val+=n;
    if(n< 1)
        return 1;
    SumN(n-1,&sum_val);
    return sum_val+n;
}

int main() {
//    Print9(9);
//    Print19(9);
    int sum=0;
    int result= SumN(6, &sum);
    cout<<result;
    return 0;
}
