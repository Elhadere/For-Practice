#include<iostream>

using namespace std;

int main(){
    int shovel, coin, x, coun=1, result=0;
    cin>>shovel>>coin;
    while (true)
    {
        result = shovel * coun;
        if(result%10 == 0 || result%10 == coin){
            break;
        }
        coun++;
    }
    cout<<coun;
    
}