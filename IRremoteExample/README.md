# Arduino IR Remote Example

This example illustrates how to use IR remote
to control a LED connected to pin 13 in the arduino.

First you need to download this library 

https://github.com/z3t0/Arduino-IRremote
and follow the instructions in the link .

Then you have to read the values sent by your own remote
using the same code just commit the lines 21-34.

Upload the sketch to your arduino . 

Open up the serial monitor get the remote and press the buttons
each button has it's own value.

Some hex codes should appear on the Serial Monitor according to the button you press.

Choose the button you want to use replac it's HEX code with
the HEX code in line 21 and enjoy .
