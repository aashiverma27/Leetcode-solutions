class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Fahrenheit=celsius*1.8+32;
        double Kelvin=celsius+273.15;
        return {Kelvin,Fahrenheit};
        
    }
};