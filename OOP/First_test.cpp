#include<iostream>

using namespace std;
class App{
    public:
        int id, age;
        string name;
        /*App(int id, string name, int age){
            this->id = id;
            this->name = name;
            this->age = age;
        }*/
        void Ecrire(){
            cout<<id<<endl;
            cout<<name<<endl;
            cout<<age<<endl;
            }
    };
int main(){
    App a;
    cout<<"Enter your Id : ";
    cin>>a.id;
    while(a.id<=0){
        cout<<"Invalid !! Please enter a number > 0 !! : ";
        cin>>a.id;
    }
    cout<<"Enter your name : ";
    cin>>a.name;
    while(a.name.size()<=5){
        cout<<"Invalid !! Please enter +5 Charachters !! : ";
        cin>>a.name;
    }
    cout<<"Enter your age : ";
    cin>>a.age;
    a.Ecrire();
}