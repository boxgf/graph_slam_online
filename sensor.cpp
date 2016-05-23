#include "sensor.h"

LIDARSensor::LIDARSensor(int input)
{
    this->samplingRate = input;
}

Constraint* SensorBase::createFactor()
{
    return NULL;
}

Constraint* LIDARSensor::createFactor()
{
    Constraint ret;
    return &ret;
}

Odometry::Odometry(int input)
{
    this->samplingRate = input;
}

Constraint* Odometry::createFactor()
{
    Constraint ret;
    return &ret;
}

Camera::Camera(int input)
{
    this->samplingRate = input;
}

Constraint* Camera::createFactor()
{
    Constraint ret;
    return &ret;
}
