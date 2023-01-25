#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string s){
    stack<char> st;
    int i = 0;
    bool balanced = true;
    while(s[i] != NULL){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]);
        } else if(s[i] == ')'){
            if(!st.empty() && st.top() == '('){
                st.pop();
            } else{
                balanced = false;
                break;
            }
        } else if(s[i] == '}'){
            if(!st.empty() && st.top() == '{'){
                st.pop();
            } else{
                balanced = false;
                break;
            }
        } else if(s[i] == ']'){
            if(!st.empty() && st.top() == '['){
                st.pop();
            } else{
                balanced = false;
                break;
            }
        } 
        i++;
    }
    if(!st.empty()){
        return false;
    }
    return balanced;
}
int main(){
    string parentheses = "{([])}";
    isBalanced(parentheses) ? cout << "Balanced\n" : cout << "Unbalanced\n";
    parentheses = "{([]})";
    isBalanced(parentheses) ? cout << "Balanced\n" : cout << "Unbalanced\n";
}