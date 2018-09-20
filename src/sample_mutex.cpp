#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex m;

void print_block(int n, char c)
{
     m.lock();
     for (int i=0; i < n; i++)
     {
          cout << c;
     }
     cout << "\n";
     m.unlock();
}

int main()
{
     thread th1 (print_block, 50, '*');
     thread th2 (print_block, 50, '$');

     th1.join();
     th2.join();
     return 0;
}
