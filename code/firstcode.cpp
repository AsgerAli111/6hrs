#include<iostream>

namespace first{

    int x=20;
}

namespace second{

    float x=34;
}






int main(){

    int x=10;

    std::cout<<"local x: "<<x<<std::endl;
    std::cout<<"namespace x: "<<first::x<<std::endl;
        std::cout<<"namespace x: "<<second::x<<std::endl;



    return 0;
}