#include<iostream>

using namespace std;

void drawBord(char *spaces){
    cout << "     |     |     \n";
    cout << "  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << "  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    cout << "     |     |     \n\n";

}

void playMove(char *spaces, char player){
    int num;
    bool running =true;
    do
    {
        cout << "Choose a case (1-9) : \n";
        cin >> num;
        num--;
        if(spaces[num] == ' '){
            spaces[num]=player;
            running=false;
            break;
        }else{
            cout << "Case # '"<<num+1<<"' it's already use !!\n";
            
        }
    }while (running);
 }
void computerMove(char *spaces, char computer){
    int num;
    do
    {
        srand(time(NULL));
        num = (rand() % 9) + 1;
        if(spaces[num] == ' '){
            spaces[num]=computer;
            break;
        }else{
            num = (rand() % 9) + 1;

        }
    } while (true);
    

}
bool winner(char *spaces){
    if(spaces[0]!=' ' && spaces[0]==spaces[1] && spaces[0]==spaces[2]){
        if(spaces[0]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[3] && spaces[0]==spaces[6]){
        if(spaces[0]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[4] && spaces[0]==spaces[8]){
        if(spaces[0]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[4]!=' ' && spaces[4]==spaces[3] && spaces[5]==spaces[4]){
        if(spaces[4]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[4]!=' ' && spaces[4]==spaces[1] && spaces[4]==spaces[7]){
        if(spaces[4]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[4]!=' ' && spaces[4]==spaces[2] && spaces[0]==spaces[6]){
        if(spaces[4]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[8]!=' ' && spaces[8]==spaces[5] && spaces[8]==spaces[2]){
        if(spaces[8]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }
    else if(spaces[8]!=' ' && spaces[8]==spaces[7] && spaces[8]==spaces[6]){
        if(spaces[8]='X'){
            cout << "You win !!\n";
            return true;
        }else{
            cout << "You lose !!\n";
            return true;
        }
    }else{
        return false;
    }
        
}
bool checkTie(char *spaces){
    for(int i=0; i<9; i++){
        if(spaces[i] == ' '){
            return false;
    }
 }
    cout << "It's a tie !!\n";
    return true;
    
}
int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBord(spaces);
    while(running)
    {
        playMove(spaces, player);
        drawBord(spaces);
        if(winner(spaces)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running =false;
            break;
        }
        computerMove(spaces, computer);
        drawBord(spaces);
        if(winner(spaces)){
            running = false;
            break;
        }else if(checkTie(spaces)){
            running =false;
            break;
        }


    };
    

    return 0;
}