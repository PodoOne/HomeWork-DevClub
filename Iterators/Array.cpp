#include <iostream>
#include <array>

template<typename Type>
class Array {
    private:
    Array(Type* inArray, int inIndex) {
        array = inArray;
        index = inIndex;
    }

    Type* array;
    int index;

public:
    Array(Type* inArray) {
        array = inArray;
        index = 0;
    }

    ~Array() = default {}

    Array begin() const {
        return Array(array, 0);
    }

    Array end() const {
        return Array(array, array->size());
    }

    Array& operator++() {
        index += 1;

        return *this;
    }

    int operator*() const {
        return (*array)[index];
    }

    bool operator!=(const Array& other) const {
        return !(*this == other);
    }

    bool operator==(const Array& other) const {
        return (this->array == other.array) && (this->index == other.index);
    }
};


int main()
{
    std::array<int, 7> array = { 2, 12, 23, 34, 12, 21, 45 };
    Array<std::array<int, 7>> iter(&array);

    for ( ; iter != iter.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }

    return 0;
}
