#include<iostream>

using namespace std;

int main(){
    int a, b, size;
    cin>>size;
    int add[size];
    for(int i=0;i<size;i++){
        cin>>a>>b; 
        add[i]=a+b;
    }
    for(int j=0;j<size;j++){
        cout<<add[j]<<endl;       
    }

}