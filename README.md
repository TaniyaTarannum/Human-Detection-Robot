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
## Construction
**Top View**
![Top view](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/ce7d999c-e961-4176-8a7d-24499c3660bf)
**Side View**
![Side view](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/a7ff4dee-b9d8-456f-b182-e35eefc6ce04)
**Back View**
![Back view](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/68533e56-1402-49e2-8b31-a01ac4681a8e)
**Front View**
![Front view](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/86a03741-c194-49e6-bb87-a090f92a7db8)
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
## Testing
![testing](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/1d0f621a-f733-4957-bd8b-94f8a795cd82)
## Output
![gps image](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/8a15924b-1158-47de-a65b-531824b2b934)
![output table](https://github.com/TaniyaTarannum/Human-Detection-Robot/assets/121234049/74f5cee3-1801-46d6-9b68-8dc9c7e2260c)
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
