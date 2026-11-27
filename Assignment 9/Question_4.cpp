#include <iostream>
#include <array>
#include <cstddef>
using namespace std;
template <typename T, size_t N>
class ArrayOperations {
    static_assert(N > 0, "Array must contain at least one element.");
    array<T, N> elements;
public:
    explicit ArrayOperations(const array<T, N>& values) : elements(values) {}
    void display() const {
        for (const T& value : elements) cout << value << ' ';
        cout << '\n';
    }
    T largest() const {
        T result = elements[0];
        for (const T& value : elements) if (value > result) result = value;
        return result;
    }
};
int main() {
    ArrayOperations<int, 5> integers({{4, 9, 2, 7, 1}});
    integers.display();
    cout << "Largest: " << integers.largest() << '\n';
    ArrayOperations<double, 3> decimals({{-2.5, -1.2, -8.0}});
    decimals.display();
    cout << "Largest: " << decimals.largest() << '\n';
}
