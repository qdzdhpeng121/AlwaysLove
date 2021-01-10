#include<iostream>
#include<string>
#include<vector>

#include"req.h"

int main(int argc, char* argv[]){
    std::cout << "Alway Love C++" << std::endl;
    int i = 0;
    int &r = i;
    int *p = &i;

    std::string name("TONY");
    std::string company("Haier");
    std::cout << name + company << std::endl;

    std::vector<int> ivec = {1,2,3,4,5,6,7,8,9,10};
    for(auto iter = ivec.cbegin(); iter != ivec.cend() ;iter++){
        std::cout << *iter << std::endl;
    }
    std::string reqContent("I Love You!");
    AlwaysLove::Req req(15L,reqContent);
    std::cout << req.toString() << std::endl;

    std::pair<std::string,std::string> pair("HOME","城阳");
    std::cout << pair.first + ":" + pair.second << std::endl;
    
    return 0;
}