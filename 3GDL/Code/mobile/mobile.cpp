/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                      UNIVERSIDAD DE GUANAJUATO                        %
%                       DIVISION DE INGENIERIAS                         %
% Aplicaciones de Sistemas Mecatronicos                                 %
% Docente: .:Perez Zamudio Fernando Tomas:.                             %
% Proyecto Final: Manipulador mecanico de 3 GDL                         %
% Usted esta en el archivo: L293.cpp                                    %
%                                                                       %
% El siguiente programa es la segunda parte del proyecto final armBot   %
& que corresponde al control del dispositivo móvil y al enlace con      %
% el módulo Bluetooth de la aplicación desarrollada para sistemas       %
% Android y su respectivos actuadores.                                  %
%                                                                       %
%                     .:Diciembre 01 de 2021 @ Integral definida:.      %
% INTEGRANTES:                                                          %
% -> GONZALO PEREZ HERNANDEZ                                            %
% -> MURILLO GUTIERREZ GUSTAVO ADOLFO                                   %
%                                                                       %
%%%%%%1%%%%%%%%%7%%%%%%%%%0%%%%%%%%%9%%%%%%%%%%4%%%%%%%%%%0%%%%%%%%%%%%*/

//Metodos de la clase L293
#include "arduino.h"
#include "mobile.h"

L293::L293()
{
  // Define por defecto los primeros pines del microcontrolador como terminales del modulo
  _IN1 = 2;
  _IN2 = 3;
  _IN3 = 4;
  _IN4 = 5;
  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
  pinMode(_IN3, OUTPUT);
  pinMode(_IN4, OUTPUT);
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, LOW);
}

L293::L293(int pinIN1,int pinIN2,int pinIN3,int pinIN4) //En el circuito L293 son: 1A, 2A, 3A, 4A
{
  // Define manualmente los primeros pines del microcontrolador como terminales del modulo
  _IN1 = pinIN1;
  _IN2 = pinIN2;
  _IN3 = pinIN3;
  _IN4 = pinIN4;
  pinMode(_IN1, OUTPUT);
  pinMode(_IN2, OUTPUT);
  pinMode(_IN3, OUTPUT);
  pinMode(_IN4, OUTPUT);
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, LOW);
}

L293::~L293()
{}

void L293::GoAhead()
{
  digitalWrite(_IN2, HIGH);
  digitalWrite(_IN4, HIGH);
  delay(5);
}

void L293::GoBack()
{
  digitalWrite(_IN1, HIGH);
  digitalWrite(_IN3, HIGH);
  delay(5);
}

void L293::GoLeft()
{
  digitalWrite(_IN1, HIGH);
  digitalWrite(_IN3, HIGH);
  delay(5);
}

void L293::GoRight()
{
  digitalWrite(_IN2, HIGH);
  digitalWrite(_IN4, HIGH);
  delay(5);
}

void L293::Stop()
{
  digitalWrite(_IN1, LOW);
  digitalWrite(_IN2, LOW);
  digitalWrite(_IN3, LOW);
  digitalWrite(_IN4, LOW);
}


/*  // BT.:METODOS 
BT::BT(byte rx, byte tx)
{
    RxPin = rx;
    TxPin = tx; 
}

BT::~BT() {}

byte BT::getTx()
{
    return TxPin;
}

byte BT::getRx()
{
    return RxPin;
}*/
