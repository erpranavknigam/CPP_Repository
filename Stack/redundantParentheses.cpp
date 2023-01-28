#include<iostream>
#include<stack>

using namespace std;

bool checkRedundant(string s){
    stack<char> st;
    bool ans = false;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        } else if(s[i] == '('){
            st.push(s[i]);
        } else if(s[i] == ')'){
            if(st.top() == '('){
                ans = true;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' ||st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }
    return ans;
}
int main(){
    string input = "((a+b))";
    cout << checkRedundant(input) << endl;
    input = "(a+b)";
    cout << checkRedundant(input) << endl;
    
}