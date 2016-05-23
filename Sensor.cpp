#include <Sensor.h>


LIDARSensor::LIDARSensor(int temp)
{
this.active = false;
this.samplingRate = temp;
}

Constraints* LIDARSensor::createFactor()
{
}

Odometry::Odometry(int temp)
{
this.active = false;
this.samplingRate = temp;
}


Constraints* Odometry::createFactor()
{
}


Camera::Camera(int temp)
{
this.active = false;
this.samplingRate = temp;
}

Constraints* Camera::createFactor()
{
}
