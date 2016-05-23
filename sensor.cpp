#include "sensor.h"

OptimizerBase *SensorBase::myOpt = new OptimizerBase();

LIDARSensor::LIDARSensor(int input)
{
    std::cout<< "LIDAR Object initialized with Sampling Rate:"<<input<<std::endl;
    this->samplingRate = input;
}

Constraint* SensorBase::createFactor()
{
    return NULL;
}

Constraint* LIDARSensor::createFactor()
{
    std::cout<<"LIDAR Factor Created"<<std::endl;
    Constraint *ret = new Constraint();
    return ret;
}

void LIDARSensor::addFactor()
{
 std::cout<<"Adding LIDAR Factor";
 myOpt->addConstraints(createFactor());


}

Odometry::Odometry(int input)
{
    std::cout<<"Odometry Object initialized with Sampling Rate:"<<input<<std::endl;

    this->samplingRate = input;
}

Constraint* Odometry::createFactor()
{
    std::cout<<"Odometry Factor Created:"<<std::endl;
      Constraint *ret = new Constraint();
    return ret;
}


void Odometry::addFactor()
{
    std::cout<<"Adding Odometry Factor";
    myOpt->addConstraints(createFactor());
}

Camera::Camera(int input)
{
    std::cout <<"Camera Initialized with Sampling Rate:" << input <<std::endl;
    this->samplingRate = input;
}

Constraint* Camera::createFactor()
{
    std::cout<<"Camera factor Created"<<std::endl;
     Constraint *ret = new Constraint();
    return ret;
}


void Camera::addFactor()
{
    std::cout<<"Adding Camera Factor";
    myOpt->addConstraints(createFactor());

}
