/*
#include <mbed.h>
#include "PinNames.h"
#include "pins.hpp"

#include <chrono>
//アクチュエータの設定

//モーターシミュレーション用
PwmOut m1p(PC_8);
DigitalOut m1d(PC_9);

PwmOut m2p(PB_8);
DigitalOut m2d(PB_9);

PwmOut m3p(PA_12);
DigitalOut m3d(PA_6);

PwmOut m4p(PA_11);
DigitalOut m4d(PA_7);

Timer timer;
function<void(void)> loop;

int main()
{
    m1p.period_ms(20);
   m1p.write(0);
  m1d.write(1);
   while(1){
    m1p.write(0.5);
    m1d.write(0);
    wait_us(1000000);

    m1p.write(0);
    wait_us(1000000);
    
    m1p.write(0.5);
    m1d.write(1);
    wait_us(1000000);

    m1p.write(0);
    wait_us(1000000);
   }
}


/*
m1p.period_ms(20);
  m1p.write(0);
  m1d.write(1);

  m1p.period_ms(20);
  m1p.write(0);
  m1d.write(1);
 
  m1p.period_ms(20);
  m1p.write(0);
  m1d.write(1);

  m1p.period_ms(20);
  m1p.write(0);
  m1d.write(1);


   timer.reset();
   timer.start();
   
    m1p.write(0.5);
    m1d.write(0);

    m2p.write(0.5);
    m2d.write(0);

    m3p.write(0.5);
    m3d.write(0);

    m4p.write(0.5);
    m4d.write(0);
    while(chrono::duration<float>(timer.elapsed_time()).count() < 10){
        loop();
        wait_ns(1);
    }
    */

   #include <mbed.h>
   #include "Encoder/Encoder.hpp"

DigitalOut dir(PA_6);
PwmOut speed(PA_14);

Encoder encoder1(PC_0, PC_1, 2024, 0, true);
void show(){
while(1)
{
    printf("count: %f\n", encoder1.getCount());
    wait_us(1000000);
}
}


int main() {
  
  speed.period_ms(20);
  speed.write(0);
  dir.write(1);
 

  // put your setup code here, to run once:

  while(1) {
    speed.write(0.5);
    dir.write(0);
    wait_us(1000000);

    speed.write(0);
    wait_us(1000000);
    
    speed.write(0.5);
    dir.write(1);
    wait_us(1000000);

    speed.write(0);
    wait_us(1000000);
  }
    // put your main code here, to run repeatedly:
  }
