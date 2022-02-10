#include <iostream>

class GeoProg {
    private:
        int start;
        int step;
        int limit;
        int current;
        int index;
    public:
        GeoProg(int start, int step, int limit) {
            this->start = start;
            this->step = step;
            this->current = start;
            this->limit = limit;
            this->index = 0;
        }

        ~GeoProg() {}

        void next() {
            if ( this->index <= this->limit ) {
                this->current *= this->step;
                } if ( this->index < 0 ) {
                    this->index *= -1;
            }

            this->index += 1;
        }

        int end() {
           if (this->index > this->limit ) {
            return 1;
           }
        }

        int getCurrent() {
            return this->current;
        }

        int getIndex() {
            return this->index;
        }

};

int main() {
    GeoProg geo(5, 2, 1);
    GeoProg geo1(3, 3, 5);
    GeoProg geo2(-6, 2, 10);

    for ( ; geo.getIndex() < geo.end(); geo.next() ) {
        std::cout << geo.getCurrent() << std::endl;
    }

    std::cout << "======" << std::endl;

    for ( ; geo1.getIndex() < geo1.end(); geo1.next() ) {
        std::cout << geo1.getCurrent() << std::endl;
    }

    std::cout << "======" << std::endl;

    for ( ; geo2.getIndex() < geo2.end(); geo2.next() ) {
        std::cout << geo2.getCurrent() << std::endl;
    }

    return 0;
}