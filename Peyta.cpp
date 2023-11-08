#include<iostream>

using namespace std;

int main(){
    string x, y;
    int coun;
    cin>>x;
    cin>>y;
    for(int i=0;i<x.length();i++){
        int n1 = tolower(x[i]);
        int n2 = tolower(y[i]);
        if(n1 > n2){
            cout<<"1";
            return 0;
        }else if(n1 < n2){
            cout<<"-1";
            return 0;
        }
    }
        cout<<"0";

}