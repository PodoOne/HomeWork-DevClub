#include <iostream>

class Countable {
    public:
        static int m_count;

        Countable() {
            m_count ++;
        }

        ~Countable() {}
};

int Countable::m_count = 0;


int main() {
    Countable count;
    Countable secont_count;
    Countable third_count;

    std::cout << Countable::m_count << std::endl;

    return 0;
}
