// test9.cpp
// inherited methods

#include <iostream>

namespace test {

class Foo {
public:
    Foo() {}
    virtual ~Foo() {}

    int getBaz() const { return baz; }

    virtual void foo() const {
        std::cout << "base class foo method" << '\n';
    }

    virtual void zap() = 0;

private:
    int baz = 42;

protected:
    int zapped;
};


class Bar : public Foo {
public:
    Bar() {
        // constructor definition here
        size = 0;
        zapped = 5;
    }

    void foo() const override {
        // code here for method declared and defined inline
        std::cout << size << '\n';
    }

    void zap() override {
        std::cout << zapped << '\n';
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
