#include<iostream>
#include<ctime>
#include<cstdlib>

namespace first{

    int x=20;
}

namespace second{

    float x=34;
}

typedef std::string text_t;

int main(){

    int x=10;
    text_t name ={"asger"};

    std::cout<<"local x: "<<x<<std::endl;
    std::cout<<"namespace x: "<<first::x<<std::endl;
    std::cout<<"namespace x: "<<second::x<<std::endl;
    std::cout<<name<<std::endl;
    srand(time(NULL));
    int number =rand()%20;
    std::cout<<number;
    return 0;
}