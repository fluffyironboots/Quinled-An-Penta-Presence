#ifndef __DFRobot_sen0395_H__
#define __DFRobot_sen0395_H__

#include "esphome.h"
#include "string"


class sen0395 : public PollingComponent, public Sensor {
 public:

    char *comStop = "sensorStop";     //Sensor stop command. Stop the sensor when it is still running 
    char *comStart = "sensorStart";     //Sensor start command. When the sensor is not started and there are no set parameters to save, start the sensor to run 
    char *comSaveCfg = "saveCfg 0x45670123 0xCDEF89AB 0x956128C6 0xDF54AC89";     //Parameter save command. When the sensor parameter is reconfigured via serialport but no tsaved, use this command to save the new configuration into sensor Flash 
    char *comFactoryReset = "factoryReset 0x45670123 0xCDEF89AB 0x956128C6 0xDF54AC89";     //Factory settings restore command. Restore the sensor to the factory default settings 

    sen0395(UARTComponent *parent) : PollingComponent(15000), UARTDevice(parent) { }

    void setup() override {
        
    }

    void update() override {

    }

 protected:

};
