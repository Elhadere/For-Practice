#include<iostream>

using namespace std;

int main(){
    int size, counter=0;
    cin>>size;
    for(int i=0;i<size;i++){
        int value=0;
        for(int j=0;j<3;j++){
            int temp;
            cout<<"'0' or '1' for the "<<j+1<<" user :";
            cin>>temp;
            if(temp==1){
                value++;
            }
        }
        if(value>1){
            counter++;
        }
    }
    cout<<counter;
}