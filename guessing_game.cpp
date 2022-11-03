#include<iostream>
using namespace std;


void guessing_game(){
    // variables 
    int chances = 9;
    bool running = true;
    int random_num = rand() % 101;
    int guessed_number;
    cout<<"Enter your number: ";
    cin>>guessed_number; 
    
    // main loop
    while(running){
        
        // checking if the number is larger 
        if(guessed_number > random_num){
            cout<<"The number guessed is too big, you have "<<chances<<" chances left."<<endl;
            cout<<"Enter your number: ";
            cin>>guessed_number;
           // reducing the chances since the guess is wrong 
            chances--;
            
        // checking if the number is smaller
        }else if(guessed_number < random_num){
            cout<<"The number guessed is too small, you have "<<chances<<" chances left."<<endl;
            cout<<"Enter your number: ";
            cin>>guessed_number;
            // reducing the chances since the guess is wrong
            chances--;
            
        // checking if the numbers are equal
        } else if(guessed_number == random_num){
            cout<<"You found the number. You win!!!";
        
  
        }if (chances  <= 0){
            cout<<"You are out of chances.";
            running = false;
        }

    } 

} 

// main window 
int main()
{
    guessing_game();

    return 0;
}
