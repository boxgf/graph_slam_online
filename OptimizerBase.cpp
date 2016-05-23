#include "OptimizerBase.h"
int OptimizerBase::numConstraints = 0;
void OptimizerBase::addConstraints(Constraint* inputConstraint)
    {
    const int Threshold = 100;
    cout<<"constraint added"<<endl;
    //Probably Stupid to be added here but just for now
    numConstraints += 1;
    if (numConstraints > Threshold)
    {
      optimize();
      numConstraints = 0;
    }

    }
void OptimizerBase::optimize()
    {

    cout<<"Optimize called"<<endl;
    }
OptimizerBase::OptimizerBase()
    {
    }

