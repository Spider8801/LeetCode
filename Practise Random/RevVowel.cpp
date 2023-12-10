#include <iostream>
#include <string>
#include<unordered_set>

using namespace std;

string reverseVowels(string s){
    unordered_set<char> vowels={ 'a','e','i','o','u','A','E','I','O','U' };
    int left =0;
    int right= s.length()-1;

    while(left<right){
        if(vowels.find(s[left])!=vowels.end() && vowels.find(s[right])!=vowels.end()){
            swap(s[left],s[right]);
            left++;
            right--;
        }else if(vowels.find(s[left])==vowels.end()){
            left++;
        }else if(vowels.find(s[right])==vowels.end()){
            right--;
        }else{
            left++;
            right--;
        }

    }
    return s;

}


int main()
{
    string input_string;
    cout<<"Enter the string length";
    getline(cin,input_string);

    string reversed_v= reverseVowels(input_string);
    cout<<"String with reversed vowels is"<<reversed_v;

    return 0;

}