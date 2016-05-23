#ifndef OPTIMIZERBASE_H
#define OPTIMIZERBASE_H
#include <iostream>
#include <vector>
using namespace std;

class OptVar
{
public:
    OptVar(){}
};

class Constraint{
public:
    Constraint(){}
};

class OptimizerBase
{

public:
    static int numConstraints;

    void addConstraints(Constraint *inputConstraint);
    void optimize();
    OptimizerBase();

};



#endif /* OPTIMIZERBASE_H */
