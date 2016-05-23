#include "OptimizerBase.h"

class SensorBase
{
public:
bool active;
int samplingRate;
virtual Constraint* createFactor();
};

class LIDARSensor: public SensorBase
{

public:
LIDARSensor(int input);
Constraint* createFactor();
};

class Odometry: public SensorBase
{

public:
Odometry(int input);
Constraint* createFactor();
};

class Camera: public SensorBase
{

public:
Camera(int input);
Constraint* createFactor();
};
