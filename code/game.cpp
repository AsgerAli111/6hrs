#include<iostream>
#include<ctime>


int main(){

int guess,key,attempt{0};

srand(time(NULL));
key=rand()%20;
std::cout<<" --------------------- "<<std::endl;
std::cout<<" NUMBER GUESSING GAME "<<std::endl;
std::cout<<" --------------------- "<<std::endl;

    std::cout<<" Enter A number \n";
    

do{

   
    std::cin>>guess;

    if(guess==key){

        std::cout<<" YOU GUESSED THE NUMBER WITH "<<attempt<<" Attempts"<<std::endl;
    }

    else if(guess>key){
        
        std::cout<<" TRY ENTERRING A SMALLER NUMBER THAN "<<guess<<" \n";
        attempt++;
    }
 else if(guess<key){
        
        std::cout<<" TRY ENTERRING A BIGGER NUMBER THAN "<<guess<<" \n";
        attempt++;
        
    }

}

while(guess!=key);

std::cin>>attempt;

    return 0;
}