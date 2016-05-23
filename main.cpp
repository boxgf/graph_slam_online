#include <Sensor.h>

int main()
{
LIDARSensor l1(2);
Odometry o1(4);
Camera c1(8);
int time = 0;
while(1)
{
time = time + 1;
if (time % l1.samplingRate == 0)
{
l1.active = true;
l1. createFactor();

}

}
}
