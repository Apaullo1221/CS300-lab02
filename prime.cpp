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


int prime(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        bool isPrime = true;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count++;
        }

        num++;
    }

    return num - 1;
}
