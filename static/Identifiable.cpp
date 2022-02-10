#include <iostream>

class Identifiable {
    public:
        static int id;
        int m_id;

        Identifiable() {
            id++;
            m_id = id;
        }

        ~Identifiable() {}

        int getId() {
            return m_id;
        }
};

int Identifiable::id = 0;

int main() {
    Identifiable first;
    Identifiable second;
    Identifiable third;

    std::cout << first.getId() << std::endl;
    std::cout << second.getId() << std::endl;
    std::cout << third.getId() << std::endl;

    return 0;
}
