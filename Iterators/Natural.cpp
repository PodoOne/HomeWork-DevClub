#include <iostream>

class Natural {
    private:
        int number;
        int current;
    public:
        Natural(int num) {
                this->number = num;
                this->current = 1;
        }

        ~Natural() {}

        int begin() {
            if ( this->number < 1 ) {
                std::cout << "Error! It's not a natural number!" << std::endl;
                return 1;
            } else {
                return this->current;
            }
        }

        void next() {
            if ( this->current <= this->number ) {
                this->current += 1;
            } else {
                return;
            }
        }

        int getCurrent() {
            return this->current;
        }

        int end() {
            if ( this->current >= this->number ) {
                return this->number;
            }
        }
};

int main() {
    Natural nat(17);

    for ( ; nat.begin() <= nat.end(); nat.next() ) {
        std::cout << nat.getCurrent() << std::endl;
    }

    return 0;
}