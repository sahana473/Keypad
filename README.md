## Abstract
In this project, a 4x3 matrix keypad is interfaced with Arduino Uno to display the entered key in Serial terminal.

## Hardware Components:

-  Arduino Uno
-  4x3 Matrix Keypad

## Development Tools Used:

- PROTEUS 8 - for simulation
- Arduino - for programming

## Hardware Connection:

- D5, D4, D3, D2 of Arduino Uno pins are connected to A,B,C and D row pins of the keypad
- D6, D7, D8 of Arduino Uno pins are connected to 3, 2 and 1 column pins of the keypad
- D0 and D1 of Arduino Uno pins are connected to TXD and RXD pin of Serial terminal.

## Usage:
- Download the schematic.pdsprj file->open in PROTEUS 8 tool.

<img src=https://user-images.githubusercontent.com/84024571/135744394-db336287-864f-44b4-8d57-021ae2e56455.PNG width="800" height="400">

- Download code. ino and open in the Arduino tool.
- Go to tools ->select Board->select Arduino UNO.
- Click on “Verify” button and copy the generated hex file path from Arduino as described in this link
https://www.instructables.com/HOW-TO-GET-HEX-FILE-FROM-ARDUINO-/
- Go to PROTEUS 8->Click on Arduino Uno->Edit Component window will pop up ->paste the hex file path in Program file->Click OK.

<img src=https://user-images.githubusercontent.com/84024571/135744722-f77f845e-d38c-4cad-a920-9ad00e588068.PNG width="800" height="400">

- Click on the Run button.

## Output:

<img src=https://user-images.githubusercontent.com/84024571/135744510-90695b8b-6490-44ff-b880-56e579d767c8.PNG width="800" height="400">
