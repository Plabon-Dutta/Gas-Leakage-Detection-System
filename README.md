# Gas-Leakage-Detection-System
1. Motivation
Gas is a molecule that is not bound, formless, or invisible and can turn into a search or solid at certain
temperature pressures. LPG gas is one of the needs for industry and household needs, namely for cooking.
LPG gas in Indonesia is the cause of many fires, a factor that often causes LPG gas fires is a damaged gas
regulator. Therefore, prevention and security are needed to minimize fires. Seeing this and given the
technological developments, an intelligent Arduino-based device was created that was able to overcome
this problem. This tool is equipped with MQ-2, SIM800L, and buzzer gas sensors. In an embedded device
the system that can convert input data received from the sensor Mq-2 sensor works to detect propane and
butane gas, then the system will send the actual data in the form of short messages (SMS) to the mobile
number that has been registered into the system. Besides being able to send SMS the system also emits a
sound that is generated from the buzzer. [1]
Leakage of a gas in any sector may cause many health issues and hence in the workplace, it is to
be cautioned against such disaster happenings by implementing a safety system that can make an early
alert to the users. This paper describes the development of a wireless sensor network for LPG gas leakage
detection. The proposed design includes an Arduino Nano microcontroller, a gas sensor, and an XBee. The
sensor node will detect a minute concentration of the gas according to the voltage output of a sensor and
also collect the gas leakage data thereby locating the specific area of the sensor node. XBee sends the
data from the gas sensor to the monitoring system that is displayed on LabVIEW GUI. A GSM module was
as a communication tool between the microcontroller unit and the mobile phone unit. The system could be
installed at any remote place and could be controlled by any mobile phone supporting the SMS service.
The reliability and productivity of the system are the key concerns and influence the design and
development choices for the system in terms of hardware and software designs. [2]
Liquefied Petroleum Gas (LPG) is highly inflammable and can burn even at some distance from
the source of leakage. One of the preventive actions to avoid the danger associated with gas leakage is to
install a gas leakage detector at suitable locations. The purpose of this paper is to execute the simulation
environment of the LPG leakage detection system. This system consists of an Arduino Uno
microcontroller, LPG leakage sensor MQ-2, and ESP8266 Wi-Fi Module. The Wi-Fi module will send the
warning message notification through a user’s smartphone with the help of Blynk application interfacing
software. The simulation system successfully detects the LPG leakage and can alert users within a
short time. [3]


3. Introduction
LPG Gas leaks have increased drastically in recent years. Gas leakage is one of the
big problems in the industrial sector, gas functioning vehicles like CNG (Compressed Natural Gas) buses,
cars residential milieu, etc. So, by observing it in the concept of the project we have determined to
develop a system that finds the leak of LPG Gas and protects the property by taking the correct precaution
at the correct time. This system provides information such as when a gas leakage is noticed, sensors in
the project are used to notice the gas leakage, and immediately turn ON the buzzer for the danger
indication. The buzzer is a clear indication of gas leakage. By the detection of the hazardous gas, the alerting
message reached the person who has control over it from the GSM. An exhaust fan is used to send the gas
from the room. The LCD display is used to display the status of the gas leak.


5. Problem Statement
Gas is a molecule that is not bound, formless, or invisible and can turn into a search or solid at certain
temperature pressures. LPG gas is one of the needs for industry and household needs, namely for cooking.
LPG Gas leaks have increased drastically in recent years in all kitchen accidents. Gas
leakage is one of the big problems with the industrial sector, residential milieu, and gas-functioning vehicles
like CNG (Compressed Natural Gas) buses, cars, etc. It is noticed that due to gas leakage, dangerous
accidents occur. Liquefied petroleum gas (LPG), or propane, is a flammable mixture of hydrocarbon
gases used as fuel in many applications like homes, hostels, industries, automobiles, and vehicles because
of its desirable properties which include high calorific value, less smoke, less soot, and meager harm to
the environment. Liquid petroleum gas (LPG) is highly inflammable and can burn even at some distance
from the source of leakage. Smoke and gas leakage detectors are very useful in detecting smoke or fire in
buildings, and so are important safety parameters in order to prevent disasters. Bursting cylinders and
accidental fires have caused lots of harm to the economies in the past. This circuit triggers the alert
system when smoke or gas leakage is detected. GSM-based Arduino LPG detector can avoid such
situations by sending an alert SMS to the owner and by turning on Buzzer/Siren at the same time.


6. Objectives
Detection of Gas Leakage (like LPG) in homes, hotels, and other domestic areas by using gas
sensors and Arduino. Set up an SMS-based alert mechanism using the GSM module. Send an SMS (alert
message) to the specified mobile number. Sound alarm-produce sound alert on a gas leak. Display status in an
LCD using a 16*2 LCD module. To suck the gas out of the room using an exhausting fan. Hence, by using
this system we can reduce gas leakage accidents and save lives and properties.


7. Requirements Analysis
The following are the essential modules in this project:
5.1. Arduino Uno
The most important and useful part of the system is Arduino Uno. Arduino is an open-source platform that helps circuit developers build electronic projects. It consists of both hardware and
software. Arduino hardware is a programmable circuit board called a microcontroller. Arduino software is
an IDE (integrated development environment) through which developers write and upload the code to the
microcontroller. We can feed a program with a set of instructions to the Arduino board that can carry out
simple to complex tasks. Traditional programmable circuit boards require separate hardware to load the
code onto the board. But Arduino eliminates the need for hardware; instead, it uses a simple USB cable to
load code onto the Arduino board. The Arduino board enables developers to feed the program in the
simplified version of the C++ language, making it easier for them to learn and code. All the output
devices are controlled by Arduino. At the same time, it reads and manipulates the input from the sensor.
LCD Display receives various messages from Arduino.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/0ab3db09-2c48-49ec-bef6-b81a7e02fcb6)
Figure 5.1: Arduino Uno.

5.2. LPG Sensor
This sensor detects the LPG gas molecules in the air. And gives respective voltage output to the
Arduino. An LPG gas sensor is a kind of device that is used to sense the presence of a hazardous
LPG gas leaks in service stations, cars, storage tanks, and homes. This sensor is attached to an alarm circuit
to give an alert to the operators through a buzzer sound in the area where the gas leak is occurring. If it
detects a gas leak, the red LED will light up, the buzzer will activate, then the system will send a
notification message stating that there has been an LPG gas leak. If no LPG gas leak is detected, the
system will continue to detect the gas level through the LPG gas sensor until it detects an LPG gas leak.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/75174507-d62e-4f0a-9b0b-7f0634f271ee)
Figure 5.2: LPG Sensor.

5.3. GSM module SIM 800
The user receives an SMS indication with the help of a GSM module connected to the Arduino Uno
board. The SIM800L GSM/GPRS module is a miniature GSM modem that can be used in a variety of IoT
projects. We can use this module to do almost anything a normal cell phone can do, such as sending SMS
messages, making phone calls, connecting to the Internet via GPRS, and much more. Another advantage
is that the board makes use of existing mobile frequencies, which means it can be used anywhere in the
world.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/67f6e4cb-4568-4bd8-aea9-1bdb2f79cf9f)
Figure 5.3: GSM module SIM 800.

5.4. 16*2 LCD Display
A 16x2 LCD means it can display 16 characters per line and there are 2 such lines. In this LCD
each character is displayed in a 5x7 pixel matrix. The 16 x 2 intelligent alphanumeric dot matrix display is
capable of displaying 224 different characters and symbols. 16 X2 displays mostly depend on multisegment LEDs. There are different types of displays available in the market with different combinations
such as 8×2, 8×1, 16×1, and 10×2, however, the LCD 16×2 is broadly used in devices, DIY circuits,
electronic projects due to less cost, programmable friendly & simple to access.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/c98b9fb0-df61-4c10-a4eb-d5850281add2)
Figure 5.4: 16*2 LCD Display.

5.5. 12-Volt Relay
We have used a 12-volt relay in this system. Arduino cannot turn on a 12-volt relay so we have
used a relay driver circuit to turn on this relay. We can control any AC or DC device with the help of this
Relay. 12V DC relay switches are the best solution for full voltage applications, as they allow a low
current flow circuit to control a high current flow circuit, like a vehicle's horn, headlights, auxiliary
lamps, fan motors, blower motors, and countless pieces of equipment existing on vehicles today.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/bb218349-47b2-4ba8-a1f1-587998ab142f)
Figure 5.5: 12-volt relay.

5.6. Buzzer
A piezoelectric buzzer is connected to the system using a transistor circuit. This buzzer gives a
warning signal to the user. An audio signaling device like a beeper or buzzer may be electromechanical or
piezoelectric or mechanical type. The main function of this is to convert the signal from audio to sound.
Generally, it is powered through DC voltage and used in timers, alarm devices, printers, alarms,
computers, etc. Based on the various designs, it can generate different sounds like alarms, music, bells &
siren.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/aa063931-93e8-4e89-b19b-1b70bfee2512)
Figure 5.6: Buzzer.

5.7. I2C_LCD Display Modul
I2C_LCD is an easy-to-use display module; it can make the display easier. Using it can reduce the
difficulty of making so that makers can focus on the core of the work. We developed the Arduino library
for I2C_LCD, the user just needs a few lines of the code can achieve complex graphics and text display
features.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/0d6510fd-f809-45f4-ad4f-5df13db22513)
Figure 5.7: I2C_LCD Display Module.

5.8. Jumper ware
A jump wire is a type of electrical wire, that also can be joint with a group of cables. A jumper wire
has a connector or pin at each end, which is normally used to connect the components of a breadboard 
baseboard or other prototype. Where the other equipment or components will be attached with a jumper
wire.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/683ee900-7b99-4322-bd9e-e82381de0f34)
Figure 5.8: Jumper Ware

6. Methodology
This proposed “Gas Leakage Detector with SMS Alert using ARDUNIO and GSM module”,
will be a great help in terms of preventing any danger caused by gas leakage. The purpose of this project
is to detect the presence of LPG leakage in homes and workplaces.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/60293470-c203-4149-8493-270eeab79663)
Figure 6.1: Basic Block Diagram.

![image](https://github.com/Plabon-Dutta/Gas-Leakage-Detection-System/assets/79752960/86ca3559-2f41-490a-a38d-0d0a4254d722)
Figure 6.2: Circuit Diagram.

6.1. Description of the entire system:
Arduino-based LPG Leakage detector with SMS indication using GSM modem project detects the
LPG gas leakage. If the LPG gas level crosses the threshold level, then it sends an SMS to the user using
the GSM modem. Also, the LPG detector system turns on the buzzer to indicate the person nearby to the
system. And at the same time, Relay is turned on. Arduino has an inbuilt Analog to Digital converter so
we need not connect any external ADC IC. We have connected the LPG sensor directly to the analog
input pins of the Arduino Uno board.
This project proves really helpful in cases when there is nobody in the house that has an LPG gas cylinder
in it. Due to some negligence, there might be LPG gas leakage which can lead to measuring accidents.
GSM-based Arduino LPG detectors can avoid such situations by sending an alert SMS to the owner and by
turning on Buzzer/Siren at the same time.
7. Critical Challenges
There are several critical challenges that may arise in the development and implementation of an
Arduino-based LPG leakage detector with SMS indication using a GSM modem. The first one is the accurate
detection of LPG gas leakage. One of the major challenges is to ensure accurate detection of LPG gas
leakage. This requires designing and implementing a highly sensitive gas sensor that can detect even
small concentrations of LPG gas in the air. The second one is power consumption. The LPG leakage detector
needs to be operational at all times to detect any gas leakages. Therefore, it is essential to minimize power
consumption to ensure long battery life. The third one is calibration. The gas sensor used in the LPG leakage
detector needs to be calibrated regularly to ensure its accuracy. This may require additional hardware and
software to automate the calibration process. Another challenge is to properly integrate the GSM modem
with the Arduino board and ensure that it can send SMS alerts in real time. This requires knowledge of
both hardware and software development. Other challenges are interference from other gases and
maintenance and repair. There may be other gases present in the environment that can interfere with the
detection of LPG gas leakage. Therefore, it is important to test the detector in different environments and
conditions to ensure its effectiveness. The LPG leakage detector needs to be regularly maintained and
repaired to ensure its proper functioning. This may require trained personnel and spare parts.

8. Conflicting Requirements
Designing an Arduino-based LPG Leakage detector with SMS indication using a GSM modem can involve
conflicting requirements due to some reasons. They are:

8.1. Sensitivity vs. False Alarms
A highly sensitive gas sensor can detect even small concentrations of LPG gas, but it may also lead
to frequent false alarms. Striking a balance between sensitivity and false alarms is crucial to ensure
reliable detection without unnecessary disruptions.

8.2. Accuracy vs. Cost
To accurately detect LPG gas leakage, high-quality gas sensors and other components are required,
which can increase the cost of the device. However, cost is also an important consideration, especially if
the device is intended for widespread use.

8.3. Battery Life vs. Real-time Alerts
The device needs to be operational at all times to detect any gas leakages. However, the frequent
use of GSM modem for sending SMS alerts can drain the battery quickly. Therefore, a trade-off between
battery life and real-time alerts needs to be considered.
8.4. Size vs. Functionality
The size of the device is an important consideration, especially if it is intended for use in small
spaces. However, the size may limit the functionality of the device, and compromise the detection and
alert capabilities.

8.5. User Interface vs. Complexity
A user-friendly interface is essential for the LPG leakage detector, but too much complexity can
make the device difficult to use. Therefore, it is essential to design a simple and intuitive interface that
provides clear instructions and alerts.

10. Conclusion and Future Work
11. 
9.1. Conclusion
Gases are highly toxic; they will affect humans as well as animals. By alerting them about gas
leakage by SMS alert or buzzer (sound) alert. Through this project, we can alert the citizens and the
workers inside the factory will help them to evacuate the affected area immediately. By these gases,
humans and animals can suffer various diseases like breathing problems, Lungs related diseases, burning
of the eyes, headaches, etc. This project was developed to enhance man and machine safety in factories and
industries. A solution to such problems is this project which ensures safety at a very low cost and can
detect gas leakage along an alert system such as sending a message to the user. The system is very simple yet
reliable and easy to use everywhere.

Future Work
The Future scope of the project is adding more software-based intelligent functions to this
system. This is an automatic gas detection and alert system. In the future, this system will have a feature
where it can notify the emergency services if any accidents happen. We are also hoping to add features
to control the leakage. A mobile app and web-based app for real-time monitoring also will be added. In
the user app for this system, many smart features will be added. The overall features will make the system
safer for the users. The system will be optimized for use in many places like cars, homes, industries
and many other places. After designing the final prototype with smart multifunctional features, the system
will be implemented in real-life scenarios.

Reference
[1]. Hasibuan, M.S. and Idris, I., 2019, December. Intelligent LPG gas leak detection tool with SMS
notification. In Journal of Physics: Conference Series (Vol. 1424, No. 1, p. 012020). IOP Publishing.
[2]. Mujawar, T. H., et al. "Development of wireless sensor network system for LPG gas leakage
detection system." International Journal of Scientific & Engineering Research 6.4 (2015): 558-563.
[3]. Saad, Hasnida, et al. "Development of LPG Leakage Simulation System Integrated with the Internet
of Things (IoT)." 2022 IEEE 18th International Colloquium on Signal Processing & Applications
(CSPA). IEEE, 2022.

