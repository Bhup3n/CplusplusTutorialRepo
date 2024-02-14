#include <iostream>

namespace first{
    int x = 1;
}
namespace second {
    int x = 2;
}

int main(){
    //namespaces provides a solution for preventin name conflicts in large projects. Each entity needs a unique name. A namespace allows for identically names entities as long as
    //the namespaces are different
    using namespace first; //if we use this and there is no x variable declared in this main function, then if you print x, it will assume u are using x from first

    std::cout << x << "\n"; //print out x from the first namespace because we have added using namespace first
    std::cout << second::x << "\n"; //print out the x from the second namespace

    return 0;
}
