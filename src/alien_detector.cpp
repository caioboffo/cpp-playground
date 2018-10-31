#include <iostream>
#include <sigc++/sigc++.h>

class AlienDetector
{
public:
    void run() { std::cout << "I'm running ...\n"; }
    sigc::signal<void> signal_detected;
};

void warn_people()
{
    std::cout << "There are alies in the carpark!" << std::endl;
}

int main()
{
    AlienDetector mydetector;
    mydetector.signal_detected.connect(sigc::ptr_fun(warn_people));
    mydetector.run();
    return 0;
}
