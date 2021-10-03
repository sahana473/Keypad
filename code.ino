/*Demonstrates the simplest use of the 4x3 matrix Keypad.
 *In this program the entered key is displayed in Serial terminal
 * 
 *Hardware used :
 *4x3 Matrix keypad
 *Arduino Uno
 *
 *Hardware connection:
 *D5,D4,D3,D2 of Arduino Uno pins are connected to 5, 4, 3, 2 row pin of keypad
 *D6,D7,D8 of Arduino Uno pins are connected to 3 , 2, 1 column pin of keypad
 *D0,D1 of Arduino Uno pins are connected to TXD,RXD pin of Serial Monitor
 * 
 * Author : Sahana B G
 * Date   : 30 Apr 2021
*/


// Include the header file:
#include <Keypad.h>

// Keypad initialization
const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[ROWS] = {5, 4, 3, 2}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {8, 7, 6}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup()
{
  // Set the serial baud rate 9600
  Serial.begin(9600);

  // Display following message at the time of initialization
  Serial.println("Simple matrix keypad");
}
  
void loop()
{
  // Read the key value
  char key = keypad.getKey();

  // If key is pressed  
  if (key)
  {
    // Display in Serial monitor
    Serial.println(key);
  }
}
