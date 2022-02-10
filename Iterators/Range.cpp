#include <iostream>

class Range {
    private:
        int start;
        int step;
        int limit;
        int current;
    public:
        Range(int start, int step, int limit) {
            this->start = start;
            this->step = step;
            this->current = start;
            this->limit = limit;
        }

        ~Range() {}

        void next() {
            this->current += this->step;
        }

        int end() {
            if ( this->limit % step == 0 ){
                return this->limit;

            } else if ( this->limit % step != 0 ) {
                return this->limit -= this->limit % this->step;
            }
        }

        bool begin() {
            this->current == this->start;
        }

        int getCurrent() {
            return this->current;
        }

};

int main() {
    Range range(0, 3, 11);

    for ( ; range.getCurrent() <= range.end(); range.next() ) {
        std::cout << range.getCurrent() << std::endl;
    }

    return 0;
}
