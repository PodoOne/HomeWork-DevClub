#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>

#define MAX 100

template <class Type>
class File {
    private:
        Type* inContent;
        std::ifstream file;
        size_t current;
        size_t max_size;
    public:
        File(const char* inFile) : file(inFile), max_size(MAX), current(0) {
            this->inContent = (Type*)malloc(this->max_size * sizeof(Type));

            if ( this->file.is_open() ) {
                this->file >> *inContent;
            }
        }

        ~File() {}

        void next() {
            if ( end() ) {
                return;
            }
            if ( this->current == this->max_size ) {
                this->max_size += MAX;
                Type* tmp = (Type*)realloc(inContent, this->max_size * sizeof(Type));
                this->inContent = tmp;
            }
            this->current += 1;
            this->file >> this->inContent[current];
        }

        bool end() {
           return this->file.eof();
        }

        const Type& getContent() const {
            return this->inContent[current];
        }

};

int main() {
    File<int> data("task.in");

    for ( ; !data.end(); data.next() ) {
        std::cout << data.getContent() << ' ';
    }
    std::cout << data.getContent() << std::endl;

    // File<char> data("task.in");

    // for ( ; !data.end(); data.next() ) {
    //     std::cout << data.getContent() << ' ';
    // }
    // std::cout << data.getContent() << std::endl;

    return 0;
}
