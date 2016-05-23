#include "OptimizerBase.h"


class SensorBase
{
public:
bool active;
static OptimizerBase *myOpt;

int samplingRate;
virtual Constraint* createFactor();
//virtual void addFactor();
};

class LIDARSensor: public SensorBase
{

public:

LIDARSensor(int input);
Constraint* createFactor();
void addFactor();
};

class Odometry: public SensorBase
{

public:
Odometry(int input);
Constraint* createFactor();
void addFactor();
};

class Camera: public SensorBase
{

public:
Camera(int input);
Constraint* createFactor();
void addFactor();
};
