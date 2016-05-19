#ifndef OPTIMIZERBASE_H
#define OPTIMIZERBASE_H
#include <iostream>
using namespace std;

class OptVar
{
};

class OptimizerBase
{
public:
    void addConstraints(isEqual);
    void optimize();
    OptimizerBase();
};

#endif /* OPTIMIZERBASE_H */
