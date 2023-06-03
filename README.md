# Human-Detection-Robot
>## Aries IITR
## Abstract
As none can stop the natural calamities from occurring which lead to a massive destruction of life and property. The only possible thing is to reduce the loss by recovering the property and saving valuable lives as much as we can. The idea of human detection bot is to identify humans from calamity hit areas where human access is not possible. This bot detects human and sends the data of the location to a server. Using this data the location of the person in trouble is known and can be saved.
## Hardware used
- Arduino Uno
- 4WD robot chassis
- L298N motor driver
- PIR motion sensor
- ESP8266 Wifi module
- NEO-6M module
- 4S Li-ion,9V Battery
- LED
- Switch
## Construction and Controlling
- The main part of our robot i.e PIR sensor is connected to arduino Uno. 
- The robotic car has 4 motors connected to motor driver which is controlled by the arduino Uno.
- To receive the data of the location GPS module is interfaced with Wifi module but is only powered through arduino when the PIR sensor detects a human and subsequently an LED glows up.
- For now, the robot is hard coded to move over the debris.
## General function of the robot
The robot has a PIR sensor which senses the presence of human and triggers the gps module. The details of the location including latitude and longitude are sent to the server through esp8266 wifi module. This data is collected from the server and displayed on a web page accessed through the IP address. Then the rescue forces can be sent accordingly to the desired location.
## Cost Structure
|Components| Cost ( in INR) |
|--|--|
|Arduino Uno|500|
|4WD robot chassis|780|
|L298N motor driver|100|
|PIR motion|69|
|sound sensor|49|
|ESP8266 Wifi module|278|
|NEO-6M module|245|
|Battery(Li-ion,9V)|240+50|
|Battery holder|60|
| DC-DC converter|75|
|Jumpers|125|
## Difficulties Faced
- Difficulty in gathering components as workshop was not accessible. Hence assembling the hardware was a tedious task.
- Simulation of wifi and gps modules couldn’t be achieved. So the code was tested only after assembling the robot.
## Limitations
- The robot cannot easily move through a surface with high irregularities.
- It is currently designed in such a way that it requires command from its user to move.
- PIR sensor does not give very accurate idea about the presence of human as it detects human motion upto 5 -7m depth.
## Advancements
- It can be made autonomous.
- PIR sensor can be replaced by advanced sensor like Grid-eye sensor and sound sensor.
- It’s structure could be made more robust and strong to travel through any terrain
- It can also b accompanied by a camera for live streaming of the view infront of it. 
## Team members
- [Shruti Mathpal]
- [Taniya Tarannum](https://github.com/taniya-04)
## Members
- [Shikhar Gupta]
- [Sambit]
## References
- [Project Idea](https://www.analyticsinsight.net/top-100-robotics-projects-for-engineering-stude)
- [Interfacing Modules](https://microcontrollerslab.com/neo-6m-gps-module-esp8266-nodemcu-track-location-google-maps/)
