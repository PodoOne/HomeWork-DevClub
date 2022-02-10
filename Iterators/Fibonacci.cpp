#include <iostream>

class Fibonacci {
    private:
        int fibo;
        int prev;
        int inext;
        int index;
    public:
        Fibonacci(int inFibo) {
            if ( inFibo < 0 ) {
                inFibo *= -1;
                this->fibo = inFibo;
                this->prev = 0;
                this->inext = 1;
                this->index = 0;
            } else {
                this->fibo = inFibo;
                this->prev = 0;
                this->inext = 1;
                this->index = 0;
            }
        }

        ~Fibonacci() {}

        int begin() {
            return this->index;
        }

        void next() {
             if ( this->index < this->fibo ) {
                this->prev = this->prev + this->inext;
                this->inext = this->prev - this->inext;
            }

            this->index += 1;
        }

        int end() {
            if ( this->index > this->fibo ) {
                return 1;
            }
        }

        int getPrev() {
            return this->prev;
        }
};

int main() {
    Fibonacci fibo(5);

    for ( ; fibo.begin() <= fibo.end(); fibo.next() ) {
        std::cout << fibo.getPrev() << std::endl;
    }

    return 0;
}
