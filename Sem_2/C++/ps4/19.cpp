#include <iostream>
using namespace std;

class Temperature{
    const float f_ethylAlcohol;
    const float f_oxygen;
    const float f_water;
    const float b_ethylAlcohol;
    const float b_oxygen;
    const float b_water;
    float temperature;
public:
    Temperature():f_ethylAlcohol(-173),f_oxygen(-362),f_water(32),b_ethylAlcohol(172),b_oxygen(-306),b_water(212){}
    bool isEthylFreezing();
    bool isEthylBoiling();
    bool isOxygenFreezing();
    bool isOxygenBoiling();
    bool isWaterFreezing();
    bool isWaterBoiling();
    void getData();
};
void Temperature::getData(){
    cout<<endl<<"Enter the temperature : ";
    cin>>temperature;
}
bool Temperature::isEthylFreezing(){
    if (temperature<=f_ethylAlcohol){
        return true;
    }
    return false;
}
bool Temperature::isEthylBoiling(){
    if (temperature>=b_ethylAlcohol){
        return true;
    }
    return false;
}
bool Temperature::isOxygenFreezing(){
    if (temperature<=f_oxygen){
        return true;
    }
    return false;
}
bool Temperature::isOxygenBoiling(){
    if (temperature<=b_oxygen){
        return true;
    }
    return false;
}
bool Temperature::isWaterFreezing(){
    if (temperature<=f_water){
        return true;
    }
    return false;
}
bool Temperature::isWaterBoiling(){
    if (temperature<=b_oxygen){
        return true;
    }
    return false;
}
int main(){
    Temperature t;
    t.getData();
    cout<<endl<<"isEthylFreezing   : "<<t.isEthylFreezing();
    cout<<endl<<"isEthylBoiling    : "<<t.isEthylBoiling();
    cout<<endl<<"isOxygenFreezing  : "<<t.isOxygenFreezing();
    cout<<endl<<"isOxygenBoiling   : "<<t.isOxygenBoiling();
    cout<<endl<<"isWaterFreezing   : "<<t.isWaterFreezing();
    cout<<endl<<"isWaterBoiling    : "<<t.isWaterBoiling();  
}