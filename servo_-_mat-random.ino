/*
   Code 23 - Edurobot.ch, destiné à l'Arduino
   Objectif : Faire bouger le bras d'un servomoteur sur une postion tirée au sort parmi 6 positions pour créer une "roue de la fortune"
*/

//*****EN-TÊTE DECLARATIF*****
#include <Servo.h>  // on inclut la bibliothèque pour piloter un servomoteur

Servo monServo;  // on crée l'objet monServo

void setup()
{
    monServo.attach(9); // on définit le Pin utilisé par le servomoteur
    monServo.write(0); // on place le servo à 0 degré au demarrage
    
    Serial.begin(9600);  // optionel : activation du port série pour lire la valeur tirée
    
}

void loop()
{
    int Tirage = random(1,7); // on définit une variable "Tirage" dont la valeur est un entier au hasard entre 1 et 6
    Serial.println(Tirage); // optionel : permet de lire la valeur tirée au hasard
    
    if (Tirage == 1)  
        monServo.write(15);  // le bras du servomoteur prend la position 15 degrés
         if (Tirage == 2)  
        monServo.write(45);  // le bras du servomoteur prend la position 45 degrés
         if (Tirage == 3)  
        monServo.write(75);  // le bras du servomoteur prend la position 75 degrés
         if (Tirage == 4)  
        monServo.write(105);  // le bras du servomoteur prend la position 105 degrés
         if (Tirage == 5)  
        monServo.write(135);  // le bras du servomoteur prend la position 135 degrés
         if (Tirage == 6)  
        monServo.write(165);  // le bras du servomoteur prend la position 165 degrés
                              delay(5000);  // le résultat du tirage reste affiché 5 secondes

        monServo.write(0);  // Retour à la position de départ
               delay(2000);  // On attend 2 secondes, puis un nouveau tirage est lancé
         
    }
