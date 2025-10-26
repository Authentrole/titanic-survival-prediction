#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:
        int getTemperature(){//getter
            return temperature;
        }
        void setTemperature(int temperature){//setter
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
    Stove stove;
    //stove.temperature = 1000000;
    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature() << std::endl;
    return 0;
}