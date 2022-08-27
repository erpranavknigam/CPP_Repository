#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str;

    string s1 = "fam", s2 = "ily";
    cout << s1 + s2 << endl;
    s1.append(s2);
    cout << s1 << endl;
    
    ////////////////////////////////

    cout << s1[1] << endl;

    ////////////////////////////////

    string abc = "kdlfjalflaskflk;fjsf;j";
    cout << abc << endl;
    abc.clear();
    cout << abc << endl;

    ////////////////////////////////

    s1 = "abc", s2 = "xyz";
    cout << s2.compare(s1)  << endl;

    ///////////////////////////////

    cout << s1 << endl;
    s1.clear(); 
    if(s1.empty()){
        cout << "string is empty" << endl;
    }

    ////////////////////////////

    s1 = "nincompoop";
    cout << s1 << endl;
    s1.erase(2,5);
    cout << s1 << endl;

    ////////////////////////////////

    s1 = "nincompoop";
    cout << s1.find("com") << endl;

    ////////////////////////////

    s1 = "nincompoop";
    s1.insert(2, "lol");
    cout << s1 << endl;

    ////////////////////////////////

    s1 = "nincompoop";
    cout << s1.size() << endl;
    cout << s1.length() << endl;

    ////////////////////////////////

    s1 = "nincompoop";
    cout << s1.substr(0,6) << endl;

    ////////////////////////////////
    
    s1 = "786";
    int x = stoi(s1);
    cout << s1 << endl;
    cout << x + 2 << endl;

    ////////////////////////////////

    x = 456;
    cout << to_string(x) + "2" << endl;

    ////////////////////////////////

    string s = "fjlksdfkl;aflks;sadfjksld";
    sort(s.begin(), s.end());
    cout << s << endl;



    
    return 0;
}