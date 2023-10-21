// C++ program to convert string 
// to char array Using the address 
// assignment of each other method 
#include <iostream> 
#include <string> 

int getNum(int num);
int sumOdd(std::string s);
int sumEven(std::string s); 
// Driver Code 
int main() 
{ 
	std::string s = "378282246310005"; 
    int result = 0;
    result= sumOdd(s) + sumEven(s);
    if(result%10==0){
        std::cout<<"Your Credit Card # Is Valid";
    }else{
        std::cout<<"Your Credit Card # Is NOT Valid";

    }



	return 0; 
}

int getNum(int num){
    return num%10 +(num/10%10);
}

int sumOdd(std::string s){
    int sum=0;
    for(int i=s.size()-1;i>=0;i-=2){
        sum+=s[i]-'0';
    }
    return sum;
} 

int sumEven(std::string s){
    int sum=0;
    for(int i=s.size()-2;i>=0;i-=2){
        sum+=getNum((s[i]-'0')*2);
    }
    return sum;
} 