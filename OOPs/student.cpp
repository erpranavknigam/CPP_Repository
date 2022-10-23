#include<iostream>
using namespace std;

class Student{

        string name;
        int age;
        bool gender;

    
        public: 
            Student(){
                cout << "Default constructor" << endl;
            }
            Student(string name, int age, bool gender){
                name = name;
                age = age;
                gender = gender;
            }
            void setName(string s){
                name = s;
            }
            string getName(){
                return name;
            }

            void setAge(int a){
                age = a;
            }
            int getAge(){
                return age;
            }

            void setGender(bool g){
                gender = g;
            }
            bool getGender(){
                return gender;
            }

            void printDetails(){
                if(gender == 1)
                    cout << name << " " << age << " " << "Male" << endl;
                else
                    cout << name << " " << age << " " << "Female" << endl;
            }

            ~Student(){
                cout << "Destroyed" << endl;
            }

            bool operator == (Student &a){
            if(name == a.name && age == a.age && gender == a.gender){
                return true;
            }
            return false;
            }
};

int main(){
    Student arr[3];
    for(int i = 0; i < 3; i++){
        string s;
        int a;
        bool g;
        cout << "Name: ";
        cin >> s;
        arr[i].setName(s);

        cout << "Age: ";
        cin >> a;
        arr[i].setAge(a);

        cout << "Gender: ";
        cin >> g;
        arr[i].setGender(g);

        Student(s,a,g);


    }

    for(int i = 0; i < 3; i++){
        arr[i].printDetails();
    }
    Student a("Ram",45,1);
    Student c = a;
    Student b("Rahul",45,2);

    if(b == a){
        cout << "Same";
    } else{
        cout << "Error";
    }
}