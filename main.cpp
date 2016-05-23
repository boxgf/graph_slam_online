#include <stdio.h>
#include <sys/time.h>
#include "sensor.cpp"
#include "OptimizerBase.cpp"

int main ()
{
struct timeval t1, t2;
gettimeofday(&t1, NULL); // Intial time
double time;
LIDARSensor lidar1(2); // initialize sensor lidar1 with sampling rate = 2 centiseconds
Odometry odom1(4);        // ''
Camera cam1(8);
while (true){
    gettimeofday(&t2, NULL);
    time = (t2.tv_sec - t1.tv_sec)*10  + (t2.tv_usec - t1.tv_usec)/100000.0; // in centiseconds

    if (int(time) % (int)lidar1.samplingRate == 0){
    lidar1. createFactor();
    }

    if (int(time) % (int)odom1.samplingRate == 0){
    odom1. createFactor();
    }

    if (int(time) % (int)cam1.samplingRate == 0){
    odom1. createFactor();
    }

}
return 0;
}
