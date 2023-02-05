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

//int SumN(int n,int *sum){
//
//    int sum_val=*sum;
//    //sum_val+=n;
//    if(n== 1)
//        return 1;
//    sum_val= SumN(n-1,&sum_val);
//    cout<<sum_val<<" ";
//    return sum_val+n;
//}

int FactN(int n, int *fact){
    int fact_val=*fact;
    if(n==1){
        return 1;
    }
    fact_val= FactN(n-1,&fact_val);
    return fact_val*n;
}

int main() {
//    Print9(9);
//    Print19(9);
    //int sum=0;
    //int result= SumN(6, &sum);
    int fact=1;
    int result= FactN(3,&fact);
    cout<<"This is the result: "<<result;
    return 0;
}
