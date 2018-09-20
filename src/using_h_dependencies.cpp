#include "exceptions/MyException.h"
#include "Rectangle.h"

int main(int argc, char const *argv[]) {
    Rectangle* rec = new Rectangle();    
    rec->fce();
    MyException e = new MyException();
    
    return 0;
}
