/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%                      UNIVERSIDAD DE GUANAJUATO                        %
%                       DIVISION DE INGENIERIAS                         %
% Aplicaciones de Sistemas Mecatronicos                                 %
% Docente: .:Perez Zamudio Fernando Tomas:.                             %
% Proyecto Final: Manipulador mecanico de 3 GDL                         %
% Usted esta en el archivo: mobile.ino                                  %
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

#include <SoftwareSerial.h>
#include "mobile.h"
#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

//BT moduloHC_05 = BT(11, 10);
L293 robot = L293(IN1, IN2, IN3, IN4);
//char commandControl;

//SoftwareSerial dataReceive(moduloHC_05.getTx(), moduloHC_05.getRx()); 
  // Sintaxis del constructor: SoftwareSerial(rxPin, txPin, inverse_logic)
  // Se invierten las conexiones para la configuración del HC-05 como "esclavo"
  // NOTA: dataReceive es un objeto que pertenece a la clase SoftwareSerial

void setup()
{
    //dataReceive.begin(9600);                    
    //dataReceive.println("Conexion Bluetooth exitosa :)");    
}

void loop()
{ 
    /*while(dataReceive.available()==0)         // Se comprueba el estado de conexion, el sistema se encuetra apagado mientras el modulo pierda conexion
      control.inertialStop();
    
    serialCommand = dataReceive.read();       // Lee el estado de recepcion. Se almacena en el buffer el caracter recibido

    switch(serialCommand)
    {
      case 'w':
          control.goHead();
          break;
      case 's':
          control.goBack();
          break;
    case 'a':
          control.positiveMoment();
          break;
    case 'd':
          control.negativeMoment();
          break;
    default:
          control.inertialStop();
  }*/
  robot.GoAhead();
  delay(1000);
  robot.Stop();
  robot.GoBack();
  delay(1000);
  robot.Stop();
  robot.GoLeft();
  delay(1000);
  robot.Stop();
  robot.GoRight();
  delay(1000);
  robot.Stop();
}
