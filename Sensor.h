#include <OptimizerBase.h>

class SensorBase
{
public:
bool active;
float samplingRate
Constraints* createFactors();

};

class LIDARSensor: public SensorBase
{

public:
LIDARSensor(float temp);

};

class Odometry: public SensorBase
{

public:
Odometry(float temp);

};

class Camera: public SensorBase
{

public:
Camera(float temp);

};
