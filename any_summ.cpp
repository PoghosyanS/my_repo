#include <iostream>


int main() {
    int num; 
    int	sum = 0;
    std::cout << "Enter a number: "<<std::endl;
    std::cin >> num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    std::cout <<" sum =  "<<sum << std::endl;
    return 0;
}

