#include <iostream>

int prime(int n);

int main() {
    for (int i = 0; i < 15; i++){
        std::cout << i << "th number in the prime number sequence: " << prime(i) << '\n';
    }

    return 0;
}

int prime (int n){
    return n;
}
