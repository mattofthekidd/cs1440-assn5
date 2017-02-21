#include <iostream>
#include <string>

void f(std::string data)
{
    int x;
    std::cout << "In function f, with data=" << data << " (" << &data << ")" << std::endl;

    x = data.length();

    std::cout << "\tx=" << x << " at " << &x << " (" << &x << ")" << std::endl;
    std::cout << "\tLeaving function f" << std::endl;
}

int main(int argc, char* argv[]) {

    std::cout << "In main" << std::endl;
    for (int i=argc - 1; i>=0; i--)
    {
        std::cout << "\targv[" << i << "]=" << argv[i] << " (" << argv+i << ") pointing to (" << std::hex << (long) argv[i] << ")" << std::endl;
    }
    std::cout << "\targc=" << argc << " (" << &argc << ")" << std::endl;
    std::cout << "\targv (" << &argv << ")" << std::endl;

    f("Hello World");

    std::string* testString1 = new std::string("This is a test");
    std::string* testString2 = new std::string("This is another test, but with a different string");

    std::cout << "\ttestString1=" << *testString1 << " (" << testString1 << ")" << std::endl;
    std::cout << "\ttestString2=" << *testString2 << " (" << testString2 << ")" << std::endl;


    return 0;
}