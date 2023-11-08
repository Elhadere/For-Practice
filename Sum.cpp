#include<iostream>

using namespace std;

class App{
    public:
        int x, y, z;

    int sum(int x, int y, int z){
        return x+y+z;
    }
    bool even(int x){
        if(x % 2 == 0){
            return true;
        }
        return false;
    }

};

int main(){
    App app;
    int coun=0;
    for(int i=0;i<3;i++){
        cout<<"Enter number "<<i+1<<" : ";
        cin>>app.x;
        while(!app.even(app.x)){
            cout<<"Please Enter an EVEN number !!! : ";
            cin>>app.x;
        }
        coun+=app.x;
    }
    cout<<coun;
}