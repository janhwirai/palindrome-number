#include<iostream>
#include <bits/stdc++.h>
#include<stack>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int a=x; 
        stack <int> st;
        while(x){
            st.push(x%10);
            x=x/10;
        }
        while(a){
            if(st.top()!=(a%10)){
                return false;
            }
            st.pop();
            a=a/10;
        }
        return true;
    }
};

int main(){
    Solution sol;
    cout<<"Enter a number to check if its palindrome:\n";
    int n;
    cin>>n;
    if(sol.isPalindrome(n)){
        cout<<"\n"<<n<<" is a Palindrome Number!";
    }
    else{
        cout<<"\n"<<n<<" is not a Palindrome Number!";
    }
}