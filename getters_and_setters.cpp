#include <iostream>

class Stove{
    private:  //private is so nothing outside of this coan read or write from and to it but we can use getters and setters to change that
        int temperature = 0;
    public:
        int getTemperature(){  //allows us to read from it
            return temperature;
        }
        void setTemperature(int temperature){ //allows us to write to it
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature >= 10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
        }
};

int main(){
    //abstraction is hiding unnecessary data from outside a class
    //getter = function that makes a private attribute readable
    //setter = function that makes a private attribute writeable

    Stove stove;
    stove.setTemperature(100);
    std::cout << "the temp is: " << stove.getTemperature();

    return 0;
}