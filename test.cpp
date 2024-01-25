#include <iostream>
#include <iomanip>
#include <cmath>

double roundToTwoDecimalPlaces(double number) {
    return std::round(number * 100.0) / 100.0;
}

int main() {
    double originalNumber = 6.33000;
    
    double roundedNumber = roundToTwoDecimalPlaces(originalNumber);

    // 소수점 이하 두 자리까지 출력
    std::cout << std::fixed << std::setprecision(2) << roundedNumber << std::endl;

    // 추가 부분
    
    return 0;
}
