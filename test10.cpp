// test10.cpp
// multi-line function prototype

#include <iostream>

namespace test {

class Bar {
public:
    Bar(int arg1IsReallyLong, int arg2IsReallyLongAlso,
            int arg3LongLongArgumentName = 42) : size{0} {
        // constructor definition here
        size = 0;
    }

    void foo() const {
        // code here for method declared and defined inline
        std::cout << size << '\n';
    }

private:
    void baz(int arg);  // declaration for private method
    int size;  // private member variable
};


void Bar::baz(int arg) {
    // method definition here
    size = arg;
}

} // namespace test
