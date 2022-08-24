#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    char sentence[n+1];
    cin.getline(sentence, n);
    cin.ignore();
    int max_len = 0;
    int curr_len = 0;
    int i = 0;
    int st = 0, maxSt = 0;
    while(1){
        if(sentence[i] == ' ' || sentence[i] == '\0'){
            if(curr_len > max_len){
                max_len = curr_len;
                maxSt = st;
            }
            curr_len = 0;
            st = i+1;
        } else{
             curr_len++;
        }
       
        if(sentence[i] == '\0'){
            break;
        }
        
        i++;
    }
    cout << "Max length: " << max_len << endl;
    for(int i = 0; i < max_len; i++){
        cout << sentence[i+maxSt];
    }
}