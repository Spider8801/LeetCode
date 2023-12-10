#include<iostream>
#include<unordered_set>
#include<ctype.h>

using namespace std;
//Pangram checks for all characters' presence
class Solution{

    public:

        bool CheckPangram(string sentence){
            unordered_set<char> seen;

            for(char currChar: sentence){
                if(isalpha(currChar)){
                    seen.insert(tolower(currChar));
                }
            }
            return seen.size() == 26;
        }
};

int main(){
    Solution sol;

    cout<< sol.CheckPangram("TheQuickBrownFoxJumpsOverTheLazyDog")<<endl;
    cout<< sol.CheckPangram("abcdefghijklmnopqrstuvwxyz")<<endl;
    cout<< sol.CheckPangram("abcdef")<<endl;

}