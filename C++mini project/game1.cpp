#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int game (char you ,char comp){
   if (you == comp ){
       return 0;
   }
   else if(you == 'r' && comp=='p'){
        return -1; // comp wins
   }
   else if (you == 'r' && comp=='s'){
       return 1;
   }
   else if(you == 'p' && comp=='r'){
        return 1; // comp wins
   }
   else if (you == 'p' && comp=='s'){
       return -1;
   }
   else if(you == 's' && comp=='r'){
        return -1; // comp wins
   }
   else if (you == 's' && comp=='p'){
       return 1;
   }
}
void score (int Ypoints,int Cpoints){
cout<<"\n\t\tYour score --> "<<Ypoints<<" - "<<Cpoints<<" <--Computer Score";
    if (Ypoints>Cpoints){
        // cout<<"\n\n\t\tHurray\U0001F389\U0001F389 You win !";
        cout<<"\n\n\t\t  Hurray, You win !!";
    }
    else if (Ypoints<Cpoints){
        cout<<"\n\n\t\t Hard Luck ! Computer Wins ";
    }
    else{
        cout<<"\n\n\t\t\tIts a Draw !\n";
    }
}
char board [3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char current_marker;
char current_player;

void drawBoard(){
    cout<<"\t\t\t "<< board [0][0] <<" | "<< board [0][1] <<" | "<< board [0][2] <<endl;
    cout<<"\t\t\t-----------"<<endl;
    cout<<"\t\t\t "<< board [1][0] <<" | "<< board [1][1] <<" | "<< board [1][2] <<endl;
    cout<<"\t\t\t-----------"<<endl;
    cout<<"\t\t\t "<< board [2][0] <<" | "<< board [2][1] <<" | "<< board [2][2] <<endl;
}
bool placeMarker(int slot){

    int row=slot/3,col;
    if (slot % 3 == 0 )
    {row=row-1;
     col = 2;
    }
    else{
    col = (slot % 3)-1;
    }
    if (board[row][col]!='X'&&board[row][col]!='O' ){board[row][col]=current_marker;
    return true;
    }
    return false;
}
char Win(){
    for (int i=0;i<3;i++)
    {
        if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]){
        return current_player;
        }
        if(board[0][i]==board[1][i]&&board[1][i]==board[2][i]){
        return current_player;
        }
    }
        if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]){
        return current_player;
        }
        if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]){
        return current_player;
        }
        return '0';
}
void swapPandM(){

    if(current_marker=='X'){current_marker='O';}
    else if(current_marker=='x'){current_marker='o';}
    else {
        if(current_marker=='O'||current_marker=='0'){current_marker='X';}
        else{current_marker=='o';}
    }

    if(current_player=='1')current_player='2';
    else current_player='1';
}
void game1 (){

    cout<<"\t\tPlayer 1 ,enter (X or 0): ";
    char marker_p1;
    cin>>marker_p1;
    cout<<endl;
    if(!(marker_p1=='X'||marker_p1=='O'||marker_p1=='x'||marker_p1=='o'||marker_p1=='0')){
        cout<<"\tInvalid Marker ! Please choose between X and O\n "<<endl;
        cout<<"\t\tPlayer 1, choose your marker : ";
        cin>>marker_p1;
        cout<<endl;
    }

    current_player='1';
    current_marker=marker_p1;
    drawBoard();
    char playerWon;

    for (int i=0;i<9;i++){
        cout<<"\n\tIts player "<<current_player<<"'s turn. Enter your slot (1-9): ";
        int slot;
        cin>>slot;
        if (slot<1 || slot>9)
        {
            cout<<"\tInvalid Slot. Try another slot!";
            i--;
            continue;
        }

        if (!placeMarker(slot))
        {
            cout<<"\tSlot is already occupied by player "
            <<current_player<<". Try another slot!";
            i--;
            continue;
        }
            drawBoard();
            playerWon = Win();

        if(playerWon=='1'){cout<<"\n\t\t ---- Player 1 Wins ----\n";;break;}
        if(playerWon=='2'){cout<<"\n\t\t ---- Player 2 Wins ----\n";;break;}
        swapPandM();

    }
    if (playerWon=='0'){
        cout<<"\tThe game is draw !";
    }
}

int main (){

    int choice;char ch1;
    cout<<"\t **********************************************"<<endl;
    cout<<"\t               THE GAME PALACIO              "<<endl;
    cout<<"\t **********************************************"<<endl;
do{
    cout<<"\t\t 1. Number Guessing Game"<<endl;
    cout<<"\t\t 2. Rock Paper Scissor"<<endl;
    cout<<"\t\t 3. Tic-Tac-Toe"<<endl;
    cout<<"\n\t\tEnter your choice (1-3) :";
    cin>>choice;
    cout<<endl;
    switch(choice){
case 1:
    int guess ;
    char ch;

    cout<<"\t\t--------------------------"<<endl;
    cout<<"\t\t:  Number Guessing Game  :"<<endl;
    cout<<"\t\t--------------------------\n"<<endl;
    cout<<"\t-You need to reach up to a number in least possible attempts\n\t\t Your guessing begins now.....\n\n";
   do { int a=1 ;
    srand(time(0));
    int number = (rand()%100)+1;
    do {

    cout<<"\t\tGuess any number (0-100) : ";
    cin>>guess;

    if(guess  < number ){
        cout<<"\t\tHigher Number Please \n";
    }
    else if(guess  > number ){
        cout<<"\t\tLower Number Please ! \n";
    }
    else {
        cout<<"\n\n\tCongratulations ! You have cleared the game in "<<a<<" attempts"<<endl;
    }
    a++;
    }while (guess!=number);
    cout<<"\n\t\tCool ! Wanna play again (y/n) : ";
    cin>>ch;
    cout<<endl;
   }while (ch=='y'||ch=='Y');
if(ch=='n' || ch == 'N')
    cout<<"\t\t\t~ Thank You ~\n\t   Hope you enjoyed the number guessing game."<<endl;
    break;
case 2:
  char ch2;
 cout<<"\n\t\t--  ROCK PAPER SCISSOR  --\n"<<endl;
do {
    int Ypoints=0,Cpoints=0;
    char you , comp;int a=0;

 do{
    srand(time (0));
    int no=rand()%9+1;

    if (no<=3){
        comp='r';
    }
    else if (no>3 && no <=6){
        comp='p';
    }
    else {
        comp='s';
    }
    a++;
    cout<<"\tEnter 'r' for rock, 'p' for paper and 's' for scissor : ";
    scanf(" %c",&you);
    int res = game (you ,comp);
    if(res==1){
        cout<<"\t\t\t\tYou Win !"<<endl;
        Ypoints++;
    }
    else if (res==-1){
        cout<<"\t\t\t\tYou Lose !"<<endl;
        Cpoints++;
    }
    else {
        cout<<"\t\t\t\tDraw\n";
    }
   }while (a!=5);
   score (Ypoints,Cpoints);
if(Ypoints<Cpoints){
cout<<"\n\n\tYou have the power to defeat the computer ! Ready for the next chance(y/n) :";
cin>>ch2;
cout<<endl;}
else{
cout<<"\n\n\t\tWanna play this game again(y/n) :";
cin>>ch2;

cout<<endl;}

}while (ch2=='y'||ch2=='Y');
if (ch2=='n'||ch2=='N'){
    cout<<"\t\t\t~ Thank You ~ "<<endl;
}
    break;
case 3:
    char ch3;
    cout<<"\t\t--------------------------"<<endl;
    cout<<"\t\t:       Tic-Tac-Toe       :"<<endl;
    cout<<"\t\t--------------------------\n"<<endl;

        game1();

        cout<<"\n\t\t\t~ Thank you ~"<<endl;
        cout<<"\t\t       Hope you enjoyed "<<endl;

    break;
default:
    exit(1);
    break;

    }
cout<<"\n\t\tTry our other games  (y/n):";
cin>>ch1;

}while (ch1=='y' || ch1 == 'Y');
if (ch1=='n'||ch1=='N'){
    cout<<"\n\n\t\tThank You ! Come back soon \n\t\t\t-- Made with <3 by Almir (S027)"<<endl;

    // cout<<"\n\n\t\tThank You ! Come back soon \n\t\t\t-- Made with \U0001F497 by ALMIR (S027)"<<endl;
}
return 0;

}
