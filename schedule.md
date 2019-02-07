## New York University Abu Dhabi
## Interactive Media
# Network Everything
### Course Number: IM-UH 2112
### Spring 2019

**Everything can be found on the course website:**   
[https://github.com/michaelshiloh/NetworkEverything](https://github.com/michaelshiloh/NetworkEverything/)

Quick
[link](https://github.com/michaelshiloh/NetworkEverything/blob/master/schedule.md#current-homework-assignment)
to current homework assignment

### Schedule Overview

This schedule is subject to change

Week 1 January 29, January 31 - Arduino   
Week 2 February 5, February 7 - Arduino   
Week 3 February 12, February 14 - Arduino and WiFi   
Week 4 February 19, February 21 - Arduino and WiFi   
Week 5 February 26, February 28 - Soldering and Construction Techniques   
Week 6 March 5,  March 7 - Project: IoT device   
Week 7 March 12,  March 14 - Project: IoT device   
Spring break      
Week 8 April 2, April 4 - Raspberry Pi and Linux   
Week 9 April 9, April 11 - Raspberry Pi and Linux   
Week 10 April 16, April 18 - Xbee with Raspbery Pi   
Week 11 April 23, April 25 - Xbee with Arduino   
Week 12 April 30, May 2 - Final project   
Week 13 May 7, May 9 - Final project      
Week 14 May 14, May 16 - Final project      
   
May 16 End of semester show?   


### Detailed Schedule

This schedule is subject to change

#### Tuesday 29 January 2018 11:50 - 1:05
- What’s the class about
- Introductions
	- Background, interests
- Syllabus review
- Summary:
	-  Be present and participate in class
	-  No electronic distractions
	-  Be proactive: Communicate with me regarding difficulties, problems, illness, etc.
	-  Allow lots of time for homework as physical construction 
	and debugging circuits and programs can be very time consuming.
- Announcements
	- Become a lab assistant! The application deadline is Feb 3rd at 11:59 pm.
		It's on CareerNet, or contact Ume (uh242@nyu.edu)
- Let's get started with Arduino
	- Important Warnings:
		- Antenna is delicate!
		- Note that our Arduino is a 3.3V system!

#### Homework due Thursday 31 January 
- **Read**
	- Linked, Chapters 1-3
	-	Making Things Talk 
		- Page xi-xviii
		- Page 1-5
		- Page 24-27
		- browse 28-35
	- If you are not familiar with Arduino, read Lesson #0, #1, and #2 of 
	[Ladyada's Learn Arduino
	tutorial](https://learn.adafruit.com/series/ladyadas-learn-arduino)
- **Do**
	- Download the Arduino IDE (ARDUINO 1.8.8) from
		[here](https://www.arduino.cc/en/Main/Software)
		Scroll down past the "Arduino Web Editor" to "Download the Arduino IDE". Select the appropriate download (if you are on Windows you probably want the Windows Installer). On the next page you will be asked if you want to contribute to Arduino Software. Scroll down a little and you will see a button that says "Just Download".
	- Try to install it if you can but don’t worry if you have trouble.   
		We’ll do that in class.  
	- Create a GitHub account and create a repository for this class. 
	[Here](https://github.com/michaelshiloh/resourcesForClasses#github-resources)
	are some instructions
	- Write a reaction to the three chapters from Linked 

#### Thursday 31 January 11:50 AM - 2:30 PM

- Announcements
	- Become a lab assistant! The application deadline is Feb 3rd at 11:59 pm.
		It's on CareerNet, or contact Ume (uh242@nyu.edu)
- Discuss readings
- Let's dig into some of the technical details of the Arduino MKR 1010
	- [Arduino MKR1010 Technical Specifications](https://store.arduino.cc/usa/arduino-mkr-wifi-1010)
		- #Important! Circuit Operating Voltage	3.3V!#
			- What does that mean
	- [Arduino MKR101
		Schematic](https://content.arduino.cc/assets/MKRWiFi1010V2.0_sch.pdf)
	- [WiFiNINA library Reference](https://www.arduino.cc/en/Reference/WiFiNINA)
		- look at server object
	- Walk through example code
	- IoT teaser using [Wia]( https://developers.wia.io/docs/arduino-mkr-wifi-1010)

Here's the article that Manas mentioned in class. It's not required but you
might find it amusing:
[The Internet of Way Too Many
Things](https://www.nytimes.com/2015/09/06/opinion/sunday/allison-arieff-the-internet-of-way-too-many-things.html)

https://www.arduino.cc/en/Tutorial/WiFiNINAWiFiWebServer

#### Homework due Tuesday 5 February 2019
- **Read**
	-	Making Things Talk 
		- Page 12, bottom left, "Connecting to the Command Line on Your Computer",
			Page to "Connecting to a Remote Web Host". 
		- Page 17, "Node.js", through the bottom of Page 21
		- Page 87, "A More Complex Network", up to "Making Requests with curl" on
			Page 103
	- Arduino [WiFi Web
		Server](https://www.arduino.cc/en/Tutorial/WiFiNINAWiFiWebServer) example
- **Do**
	- If you are a Windows user, 
			I highly recommend Cygwin over the native DOS
			CLI (Command Line Interface).
	- Install node.js according to the instructions on page 17
		and follow the steps to use it on pages 17 and 18
	- Install p5.js according to the instructions on page 20
	  and follow the steps to use it on pages 20 and 21

#### Tuesday 5 February 2018 11:50 - 1:05

**Announcement**
- Do we have any new students?
	- Any experience with Arduino or programming?
	- Put away your cellphones and close your computers unless we are using them in class
	- I expect anyone who has recently joined the class to catch up on all the
		material and homework by Thursday
- Regarding taking notes on your laptop
	- I recognize that for some of you it's necessary and so I allow it
	- However, you should strongly consider switching to pen and paper. 
		Studies have shown that you retain information better when you write 
		your notes by hand as compared to typing your notes.
	- I am concerned, though, that the potential for distractions is great. I
		expect you to only take notes, and not use the computer for anything else
- We have a new working network!  
	SSID: IMNetwork   
  Password: static123   

**Review**
- SimpleWiFiWebServer (Arduino built-in example)

**Lecture**
- The Internet
- How IP addresses get assigned
- Routers and Modems

#### Homework due Thursday 7 February

**Read**
- Read [HTTP Basics](https://www3.ntu.edu.sg/home/ehchua/programming/webprogramming/HTTP_Basics.html) up to "Conditional GET Requests", about half way down the page
- Read the [Tutorial](https://www.arduino.cc/en/Tutorial/WiFiNINAWiFiWebServer) for the WiFiWebServer Arduino built-in example. You can also find the code in your Arduino examples tab. Compare this to the example we did in class, SimpleWiFiWebServer and try to understand what is similar and what is different.
- Read the code for my [Bidirectional Web Server](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/bidrectionalWebServer) example
	- Be prepared to ask questions about how this works

#### Thursday 7 February 2018 11:50 - 1:05

**Lecture**

**Demo and do with me**
- WiFiWebServer (Arduino built-in example)
- The two examples we just looked at are one-way. Can we both send and receive
	information at once?
- [Bidirectional Web Server](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/bidrectionalWebServer) example

**Optional**
- Use telnet to do the same things
	- telnet 192.168.1.139 80 (use the IP address of your MKR1010)
	- GET / HTTP/1.1  (or GET /H or GET /L)
	- enter a blank line
- Use tcpdump to see the conversation
	- tcpdump -i wlp4s0 -A host 192.168.1.139
	- better with the WiFiWebServer example because there is more text to see
- What does this tell us about security? 
- nmap can be used to find out what services are running (also known as what
	ports are open)



- The three examples we just looked at are all accessed by a web server i.e. a
	human. What if we want devices to talk to each other? In order to do this we
	need to learn a new protocol: User Datagram Protocol

**Lecture** (This is where you close your laptop)
- Introduction to User Datagram Protocol (UDP)
- Like TCP (Transmission Control Protocol), UDP makes use of (relies upon) IP, the Internet Protocol.
- Like TCP, UDP uses ports so that a given host can provide multipe services
	(servers) on different ports
- TCP is a more reliable and complicated protocol
- UDP is connection-less. Once the message (datagram) is sent, the connection
	is closed.
- TCP provides error and flow control. UDP does not.
- Because UDP is simpler and lacks error and flow control, it tends to be
	faster and has lower latency and so is often suited to situations where
	perceived lack of latency would be a problem, such as gaming or video
	streaming. Also because it's simpler it's easier to implement on
	microcontrollers.

**Finally, a demonstration of two devices talking to each other using UDP**   
[transmitter](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/WiFiUdpSendByteOnButtonPress)
and
[receiver](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/WiFiUdpRecvBytetoLED)

Remember the maxim in "Making Things Talk": "Listen more than you talk". When
you have devices talking to each other, it's important to figure out which
will be talking more, and make sure the other one can listen enough. 

In this last pair of programs, which is the server and which is the client?
Why?

**In Class Activity**
Working in pairs, get this working.

**Lecture**
- Introduction/review of basic generic microcontroller principles
- Arduino in general
- MKR1010 specifics
	- [Technical
		specifications](https://store.arduino.cc/usa/arduino-mkr-wifi-1010)
	- [Information](https://components101.com/microcontrollers/arduino-mkr1000-wi-fi-board) about the MKR1000 which is similiar and provides some more details 
	- Be very careful of the WiFi antenna!
	- 3.3V system
- Review of basic electronics, and what it means to use a 3.3V system

**In Class Activity**
- Connect some LEDs and sensors and practice some intermediate interactions

### current-homework-assignment

####Homework due Thursday 14 February 2019

**Important reminders**
- Don't connect anything to 5V!
- Don't connect anything to VIN!
- Working in pairs, where one of you is the transmitter and one is the
	receiver:
	- On the board that is running WiFiUdpSendByteOnButtonPress (the transmitter) 
		wire up three momentary switches to any inputs of your choosing.
		- Test each of the switches with the built-in example "digitalReadSerial".
		- Put different colored plastic caps on the switches to identify them
	- On the board that is running WiFiUdpRecvBytetoLED wire up three LEDs.
		- Test each of the LEDs with the built-in example "blink".
		- Try to use the same three colors as the switches
	- Modify WiFiUdpSendByteOnButtonPress to send 3 bytes instead of just one,
		where each byte represents the value of one switch. For instance, the
		first byte might be the red switch, the second the blue switch, and the
		third byte the green switch. You will need three variables for the button
		state and another three for the previous button state. Send the three
		bytes when **any** of the switches are pressed.
	- Modify WiFiUdpRecvBytetoLED to receive those 3 bytes. After reading the
		packet, save each byte in a
		variable with names "redSwitchState", "blueSwitchState", etc.
		and then use each variable to control the corresponding LED.
- I have put switches and LEDs in yellow bins on one of our shelves. We have
		plenty more if you need, just let me know.
- In the box with the switches I have put 10K ohm resistors (brown-black-orange-gold)
- In the box with the LEDs
	I have put 470 ohm resistors (yellow-purple-brown-gold) 
- Review
	[this](https://programmingelectronics.com/tutorial-17-using-a-button-old-version/) if you need to rememeber how to use an LED and a momentary switch
- Review [this](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard) if you need to remember how to use a solderless breadboard

