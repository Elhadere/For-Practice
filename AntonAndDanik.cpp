#include<iostream>

using namespace std;

int main(){
    int size;
    int Acoun=0, Dcount=0;
    string value;
    cin>>size;
    cin>>value;
    for(int i=0;i<size;i++){
        if(value[i]=='A'){
            Acoun++;
            continue;
        }
        Dcount++;
    }
    if(Dcount<Acoun){
        cout<<"Anton";
    }else{
        cout<<"Danik";
    }
}