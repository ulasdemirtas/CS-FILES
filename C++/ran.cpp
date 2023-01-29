#include <iostream>
#include <random>
#include <iomanip>

using std::cout;
using std::endl;
using std::setprecision;

constexpr int FLOAT_MIN = -1;
constexpr int FLOAT_MAX = 1;

int main()
{
    std::srand(std::time(nullptr));
    for (int i = 0; i < 5; i++)
        cout << setprecision(6)
             << FLOAT_MIN + (float)(rand()) / ((float)(RAND_MAX/(FLOAT_MAX - FLOAT_MIN)))
             << endl;

    return EXIT_SUCCESS;
}
