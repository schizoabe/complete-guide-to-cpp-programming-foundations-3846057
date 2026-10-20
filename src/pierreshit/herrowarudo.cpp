#include <iostream>
#include <string>
//bbabbys first conditional
std::string compliment(){
    return "Your Handsome";
}

int main(){
    std::string name;
    std::cout << "Enter youre name, Pierre:";
    std::cin >> name;
    if (name.empty()) {
        std::cout << "You forgot to type name dummy" << std::endl;
    }
    else if (name == "Pierre") {
        std::cout << "hello " << name << " " << compliment() << "." << std::endl;
    }
    else {
        std::cout << "Hello " << name << ", you are ughh leeeee!" << std::endl;
    }

    return 0;
}

