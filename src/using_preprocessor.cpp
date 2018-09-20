#include <iostream>

using namespace std;
#define TABLE_SIZE 100
int table1[TABLE_SIZE];
#undef TABLE_SIZE

#define getmax(a,b) ((a)>(b)?(a):(b))

int main()
{
    int x = 5, y;
    y = getmax(x,2);
    cout << y << endl;
    cout << getmax(7,x) << endl;
    return 0;
}
