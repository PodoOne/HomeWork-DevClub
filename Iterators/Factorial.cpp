#include <iostream>

class Factorial {
    private:
        int factorial;
        int start;
        int number;
        int index;
    public:
        Factorial(int inFactorial) {
            this->factorial = inFactorial;
            this->start = 1;
            this->number = 2;
            this->index = 0;
        }

        ~Factorial() {}

        int begin() {
            return this->index;
        }

        void next() {
            if ( this->index < this->factorial ) {
                this->start *= this->number;
                this->number += 1;
            }

            this->index += 1;
        }

        int getFactorial() {
            return this->start;
        }

        int end() {
            if ( this->index == this->factorial ) {
                return 1;
            }
        }

};

int main() {
    Factorial fact(7);

    for ( ; fact.begin() < fact.end(); fact.next() ) {
        std::cout << fact.getFactorial() << std::endl;
    }

    return 0;
}
