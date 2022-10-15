#include "question1.h"
bool test_config()
{
    return true;
}

string get_factorial_sequence(int num){
int factorial = 1;
string equation = "";
std::stringstream sstm;
    for(int i = 1; i <= num; ++i) {
            factorial *= i;
            if (i != num)
            sstm << i << "x";
            equation = sstm.str();
        }
    sstm << num << "=" << factorial;
    return sstm.str();
}
