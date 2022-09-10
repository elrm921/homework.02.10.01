#include <iostream>
#include <vector>

template<typename T>
int move_vectors(T &t1, T &t2) {
    T t0 = std::move(t1);
    t1 = std::move(t2);
    t2 = std::move(t0);
    return 0;
}

int main() {
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);

    for (auto &n : two) {
        std::cout << n << std::endl;
    }

    return 0;
}