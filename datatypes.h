#ifndef DATATYPES_H
#define DATATYPES_H

#pragma pack(1)
typedef union {
  struct {
    short TempSensor1;
    short TempSensor2;
    short TempSensor3;
    short TempSensor4;
    short TempSensor5;
    short TempSensor6;
    short TempSensor7;
    short TempSensor8;
    short Sun;
    short Volume;
    unsigned char PumpSpeed1;
    unsigned char PumpSpeed2;
    unsigned char PumpSpeed3;
    unsigned char PumpSpeed4;
    short HeatQuantityWH;
    short HeatQuantityKWH;
    short HeatQuantityMWH;
    unsigned char Fehlermaske;
    unsigned char Sensorbruch;
    unsigned char Sensorkurzschluss;
    short TempSensorGFD1;
    short TempSensorGFD2;
    unsigned short SystemTime;
    short Volume2;
    short Volume22;
    short Volume3;
    short Volume33;
  } bsPlusPkt;
  unsigned char asBytes[28];
} Data_Packet;

#endif
