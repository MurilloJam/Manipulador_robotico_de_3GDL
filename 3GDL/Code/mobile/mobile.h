/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                      UNIVERSIDAD DE GUANAJUATO                        %
%                       DIVISION DE INGENIERIAS                         %
% Aplicaciones de Sistemas Mecatronicos                                 %
% Docente: .:Perez Zamudio Fernando Tomas:.                             %
% Proyecto Final: Manipulador mecanico de 3 GDL                         %
% Usted esta en el archivo: L293.h                                      %
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

#ifndef mobile_h
#define mobile_h

#include "arduino.h"
/* --> CLASE L293 .:CONTROLADOR DE DIRECCION:. <-- */
class L293
{
  public:
    L293();
    L293(int, int, int, int);
    ~L293();
      //Funciones set()
    void Stop(); //Freno por inercia
    void GoLeft(); //Retorno hacia la izquierda
    void GoRight(); //Retorno hacia la derecha
    void GoAhead(); //Adelante
    void GoBack(); //Atras
  private:
    int _IN1;
    int _IN2;
    int _IN3;
    int _IN4;
};

/* --> CLASE BT .:Control Serial:. <-- 
class BT
{
    private:
        byte RxPin;             // Pin de recepcion de datos, debe ser un PWM para la interaccion con un objeto de la clase serial.
        byte TxPin;             // Pin de transferencia de datos, debe ser un PWM para la interaccion con un objeto de la clase serial.
    public:
        BT(byte, byte);         // Constructor que inicializa dos puertos con un tipo de dato byte para ahorrar espacio en los registros.
        ~BT();                  // Destructor no necesario, pero implementado de acuerdo a la POO
          //Funciones set
        char setCommand(char);
          //Funciones get()
        byte getRx();
        byte getTx();
};*/

#endif
