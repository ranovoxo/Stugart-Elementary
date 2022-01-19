#include "helpers.h"
#include <iostream>
#include <time.h>
using namespace std;

long FourDigitRandom()
{
   return (long) rand() % (9999 + 1); 
}
long GenerateID()
{
    long l = FourDigitRandom() + (FourDigitRandom() * 10000);
    
    return l;
}