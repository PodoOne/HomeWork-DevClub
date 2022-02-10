#include <iostream>
#include <list>

class Mohican {
    private:
        int id;
        static int lastId;
        static std::list<Mohican*> latsMohican;
    public:
        Mohican() {
            lastId ++;
            id = lastId;
            latsMohican.push_back(this);
        }

        ~Mohican() {
            lastId --;
            latsMohican.remove(this);
        }

        int getId() {
            return id;
        }

        static Mohican getLastMohican() {
            return *latsMohican.back();
        }
};

int Mohican::lastId = 0;

std::list<Mohican*> Mohican::latsMohican;

int main() {
    Mohican* a = new Mohican();
    Mohican* b = new Mohican();
    Mohican* c = new Mohican();
    Mohican* d = new Mohican();

    std::cout << "Last Mohican : " << Mohican::getLastMohican().getId() << std::endl;
    std::cout << "===" << std::endl;

    delete (d);

    std::cout << "Last Mohican : " << Mohican::getLastMohican().getId() << std::endl;

    delete (a);
    delete (b);
    delete (c);

    return 0;
}
