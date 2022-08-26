# line-follower
  

## Project Details

  

"Line follower”

  

V Sem, B.Tech. (ECE)
  

## Components Used

Arduino Uno
2 x IR Proximity Sensor
H-Bridge L298 Motor Driver
2 x DC Motors 12 V
Chassis and Wheels

  

## Component Description

### IR Proximity Sensor
The IR sensor is a 3 three wired sensor, in which the brown and the black wire are used to connect the sensor to the power supply, whereas, the red wire is connected to the load, or Arduino, in our circuit.

**Connection:** The load wires of the IR sensors are connected to pin 8, 9 and 10 as shown in the schematic.
Here in this Arduino line follower robot when sensor senses white surface then Arduino gets 1, ie, HIGH as input and when senses black line arduino gets 0, ie, LOW as input.
### L298N H-Bridge Motor Driver
If we want the left motor to rotate in one direction, we apply a high pulse to IN1 and a low pulse to IN2. To reverse the direction, reverse the pulses to IN1 and IN2. The same applies to the right motor.

Speed control is also possible with the L298N motor driver. All we need is feed PWM ( Pulse Width Modulation) signals to the motor enable pins. The speed of the motor will vary according to the width of the pulses. The wider the pulses, the faster the motor rotates. In Arduino this can be done using analogWrite(pinNumber, duration).  
**Connection:** 
-   Motor A wires are connected to motor terminal 1 and 2 of L298N, whereas Motor B wires are connected to motor terminal 3 and 4. IN1, IN2, IN3 and IN4 are connected to pin 2, 3, 4, 7 respectively.
-   Now, Motor A and Motor B Enable should be connected to terminals on arduino which have ~ sign, so that speed of these motors can be controlled using PWM. Here, they have been connected to pin 5 and 6.

