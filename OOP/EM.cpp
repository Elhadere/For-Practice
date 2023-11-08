#include<iostream>

using namespace std;

class Employee{
    private:
        int id;
        string name;
        string number;
    public:
        void setId(int id){
            if(id>0){
             this->id = id;
            }else{
                cout<<"Invalid Id"<<endl;
            }
        }
        void setName(string name){
            this->name = name;
        }
        void setNumber(string number){
            if(number.size()<=2){
                this->number = number;
            }else{
                cout<<"Invalid Number"<<endl;
            }
        }
        int getId(){
            return this->id;
        }
        string getName(){
            return this->name;
        }
        string getNumber(){
            return this->number;
        }
};

int main(){
    Employee e;
    e.setId(5);
    e.setName("Abdo");
    e.setNumber("2");
    cout<<e.getId()<<" - "<<e.getName()<<" - "<<e.getNumber()<<endl;
    return 0;
}
