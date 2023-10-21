#include<iostream>


int main(){
using namespace std;

    string questions[] = {"1. What year C++ was created ? ",
                          "2. Who invented C++ ?",
                          "3. What is the predecessor  of C++ ?"};

    string answers[][4] = {{"A. 1985", "B. 1970", "C. 1985", "D. 1975"}, 
                           {"A. Guido Van", "B. Bjarne Stoustrup", "C. Elon Mask", "D. Mark Zurg"}, 
                           {"A. C", "B. C+", "C. B", "D. B+"}
                            };

    char solutions[] = {'C', 'B', 'A'};
    char gess;
    int score = 0;
    int size;
    
    size = sizeof(questions)/sizeof(questions[0]);
    for(int i=0; i<size; i++){
        cout << "****************************** \n";
        cout << questions[i] << "\n";
        cout << "****************************** \n";
        for(int j=0; j<sizeof(answers[i])/sizeof(answers[i][0]); j++){
            cout << answers[i][j] << "\n";
        }
        cin >> gess;
        gess = toupper(gess);
        if(gess == solutions[i]){
            score++;
        }
    }
    cout << "****************************** \n";
    cout << "# of questions : " <<size<<"\n";
    cout << "# of correct answers : "<<score<<"\n";
    score = (score/double(size))*100;
    cout << "Your score : "<<score<<"%";
}
