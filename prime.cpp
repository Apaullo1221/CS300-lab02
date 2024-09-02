#include <iostream>

//DEFINE THIS FUNCTION
//prime(n) should return the nth prime number
int prime(int n);

int main() {
    for (int i = 1; i < 15; i++){
        std::cout << i << "th number in the prime number sequence: " << prime(i) << '\n';
    }

    return 0;
}


