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

#### Tuesday 29 January 2019 11:50 - 1:05
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

#### Tuesday 5 February 2019 11:50 - 1:05

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

#### Thursday 7 February 2019 11:50 - 1:05

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

#### Homework due Thursday 14 February 2019

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

#### Tuesday 12 February 2019 11:50 - 1:05

**Lecture**
- MKR1010 specifics
	- [Technical
		specifications](https://store.arduino.cc/usa/arduino-mkr-wifi-1010)
	- [Information](https://components101.com/microcontrollers/arduino-mkr1000-wi-fi-board) about the MKR1000 which is similiar and provides some more details 
	- Be very careful of the WiFi antenna!
	- 3.3V system
- Review of basic electronics, and what it means to use a 3.3V system

- Doing multiple things at once
	- Blink without delay

#### Thursday 14 February 2019 11:50 - 2:30

**Show me your projects**

**Lecture**
- [My
	solution](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/threeButtonsToThreeLEDSUDP/basic) to the homework assignment 
- What if we want to blink while doing this? Blink uses delay() which would
	prevent us from seeing that someone is trying to communicate with us, so we
	need to [blink without using
	delay](https://www.arduino.cc/en/tutorial/BlinkWithoutDelay)
- How would we incorporate this in our program?
	- See [blinkingWithoutDelay](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/threeButtonsToThreeLEDSUDP/blinkingWithoutDelay)

#### Homework due Tuesday 19 February 2019

**Part 1: Do**

- In your last homework, and in [my
	solution](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/threeButtonsToThreeLEDSUDP/basic), we used separate
	code for the transmitter and the receiver. In fact, it is possible to
	combine the code, so that each device can both transmit and receive. We call
	this a transceiver.

	With your partner, write a transceiver that will work both ways. 
	The only difference between your programs will be
	the IP address (and possibly the port) of your partner's device

	You might start by looking at your individual programs
	and then think about what elements are common. Then add the ability to
	listen to the other device (and activate your LEDs), 
	and the ability to send your key presses to the other device. You've done
	this already in separate code, now you just need to combine them.

	Hint: You might find it helpful to think of these as isolated tasks. 

	For this assignment I want you to incorporate good programming habits:

	1. Use functions to organize your code into subtasks. Don't write everything
		 in the Arduino ```loop()``` function.
	1. Use the keyword ```const``` for variables that will not change
	1. Choose descriptive names for all your variables and functions
	1. Practice defensive programming. Think about what assumptions your
		 code makes, and check these assumptions before proceeding.
	
	As before, use three momenary switches and three LEDs, except that now both
	of your circuits will also be identical and will include both switches
	and LEDs.

	You do not need to make your LEDs blink: simply pressing a button
	should make the corresponding LED light up on your partner's board.

**Part 2: Read**

- **Designing Connected Products** 
	- Read pages vii through 28. This includes the
		Table of Contents, the Forward, the Preface, and Chapter 1. 
	- Write a short response (two paragraphs) to the reading
	- Write a short (two paragraphs) description of a hypthetical 
		device you imagine (you won't have to build this so it
		doesn't have to be something you know how to make). Address two of the
		design concepts in the book on pages 21-26
- **Making Things Talk**
	- Read "Programming and Troubleshooting Tools for Embedded Modules" on pages
		164 - 170
	- Watch [Clay Shirky’s 4 part video 
	series](https://vimeo.com/channels/debugging) 
	on debugging (less than 20 minutes total)

#### Tuesday 19 February 2019 11:50 - 1:05

- Review [my
	solution](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/threeButtonsToThreeLEDSUDP/bidirectional/transceiver) to the homework assignment

#### Homework due Thursday 21 February 2019

- Clean up your solution to the homework assignment using good programming
	techniques. You don't need to be as excessive as I was in my solution. After
	you make these changes, make sure your program still works.

- Create a new folder in your Github repository and 
	upload your solution to the homework assignment.
	Name the new folder 
	something like "UDP transceiver" (Github will replace the space with a
	character, probably an underscore ('_')).

- Study [my
	solution](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/arduinoSketches/threeButtonsToThreeLEDSUDP/bidirectional/transceiver) 
	to the homework assignment and bring any questions to class on Thursday

#### Thursday 21 February 2019 11:50 - 2:30 

**Homework**
- Did you all upload your files to github?

**Discussion**
- Debugging techniques
- What kind of things can go wrong
	- Accessing beyond the bounds of an array
	- = vs ==
		- Defensive programming way to avoid this
	- Off by one errors

		```while (i <= 10)```

**Demo**
- ssh into linux computer
	- from anywhere
		- ssh 1.tcp.ngrok.io -p 23885 -l michael
	- from IMNetwork
		- ssh 192.168.1.22 -l michael
- Command line commands
	- passwd
	- ls
	- cd
	- pwd
	- nano <filename>
	- sudo adduser <username>
	- cat
	- cp
	- rm
	- mv
	- man <command>
	- tab completion
	- ^C
	- ^D
	- ifconfig

**node.js**
- Explain udpReceiver.js
	- ipv4 vs ipv6
	- Callback functions
	- Why printing binary looks weird
	- man ascii
- Explain udpEchoServer.js
	

#### Homework due Tuesday 26 February 2019

- Read [Basic Linux Commands for
	Beginners](https://maker.pro/linux/tutorial/basic-linux-commands-for-beginners)

- Watch [Learning Node.js](https://www.lynda.com/Node-js-tutorials/Demo-application-overview/612195/677538-4.html) Lynda tutorial
	- Introduction to Node
	- Understanding npm (don't worry about creating your own modules)
	- Reading and Writing Files
	- Exploring Web Frameworks

		You can use your account on our linux computer to practice. 
	  Remember that to log in to our computer type 
		```ssh 1.tcp.ngrok.io -p 23885 -l <your user name>```
		Node.js is already installed.

- Read all of Chapter 4, "Look, Ma, No Computer!"
	in "Making Things Talk". You've already 
	read the section "Programming and Troubleshooting Tools 
	for Embedded Modules" but it would be a good idea to skim it again.

#### Tuesday 26 February 2019 11:50 - 1:05 

- Discuss reading in "Designing Connected Products"
- Discuss your concepts


#### Homework due Thursday 28 February 2019

- In [The definitive Node.js
	handbook](https://medium.freecodecamp.org/the-definitive-node-js-handbook-6912378afc6e) read
	- [Introduction to Node.js](https://medium.com/p/6912378afc6e#0a66)
	- [How HTTP requests work](https://medium.com/p/6912378afc6e#bdce)
	- [The HTTP protocol](https://medium.com/p/6912378afc6e#c095)
	- [Build an HTTP Server](https://medium.com/p/6912378afc6e#adef)
	- [Making HTTP requests with Node](https://medium.com/p/6912378afc6e#880e)

- Design a more realistic "connected device". By realistic I mean that you
	should work within our limitations, such as:
	- The connected device will be your Arduino MKR1010. It can interface to
		simple sensors (light, sound, distance measuring, touch, humidity,
		temperature, force, bending, etc.) or actuators (LEDs, motors, speakers)
		- Anything involving a camera requires computer vision and is very hard.
			Also there is no way to connect a camera to the MKR1010
		- We have sensors that can measure the distance to whatever is closest to
			them, but they can't tell where that object is
		- Sounds sensors can tell you how load a sound is, but can't understand
			speach. 
	- Our server will be a node.js script running on our Linux computer. We have
		not studied node.js extensively, so your programs will be relatively
		simple 
		- Although you can make your program as complex as you can handle if you
			wish.
		- We can display simple web pages, we will learn how to display
			buttons and how to tell when a button has been clicked.
		- We will learn how to manipulate simple properties of a web page, 
			e.g. changing its color
	- Your device does not need to have a useful function. You do not need to
		answer "Why would people buy this".
	- Sketch out a block diagram of the hardware and software systems
		- Your hardware block diagram should show any sensors and actuators, 
			although you don't need to draw a schematic (you will do this later, 
			so you can think about it)
		- Your software block diagram should include the Arduino program that 
			runs on your MKR1010 as well as the node.js program that runs on 
			the Linux computer
	- It's OK if you don't quite know how to accomplish all of this yet, as some
		of these things have not been taught yet. Do the best you can so that
		you get an idea of what you don't yet know.
		
#### Thursday 28 February 2019 11:50 - 2:30 

Announcement:
- Label your kit and shelf very clearly! 

Visit
- Sensors and actuators (Arduino)

Example: Trivial Connected device

server.js:

```
const http = require('http')
const fs = require('fs');
const express = require('express'); // web server application
const app = express();        // instantiate express server
const server = http.Server(app);  // connects http library to server
const hostname = "127.0.0.1";


const PORT=8080;

app.use(express.static('public'));  // find pages in public directory

server.listen(PORT, () => {
  console.log(`Server running at http://${hostname}:${PORT}/`);
})
```

public/index.html:

```
<!doctype html>
<html>
    <head>
        <meta charset="utf8"/>
        <title>Trivial Connected Device Control Panel</title>
        <script src="client.js"></script>
    </head>
    <body>
        <button onclick="ledON()">LED ON</button>

        <button onclick="ledOFF()">LED OFF</button>
    </body>
</html>
```

public/client.js:

```
function ledON() {
    console.log ("sending a message to turn on the LED");
}

function ledOFF() {
    console.log ("sending a message to turn off the LED");
}
```

#### Homework due Tuesday 5 March 2019

- Read [Chapter 20: Node.js](http://eloquentjavascript.net/20_node.html)
	and - [Chapter 21: Project: Skill-Sharing Website](http://eloquentjavascript.net/21_skillsharing.html)
	from [Eloquent
	Javascript](https://eloquentjavascript.net/). You might want to browse other
	chapters as well (Optional).
- Another resource is these [Node.js notes for
	Professionals](https://books.goalkicker.com/NodeJSBook/) (Optional)
- Modify (or completely replace) your proposed connected device to 
	fit within our means. 
	- Limit yourselves to the sensors and actuators that are available in the lab.
	- Limit yourselves to a relatively simple web page, unless you know HTML and
		CSS and want to make it more elaborate. 
		
		Consider the very simple web server control panel for a connected device 
		that we worked on today.
		
		We will learn how to make 
		somewhat more elaborate web pages and control
		panels, but not much more elaborate. (You will be able to select options, 
		and enter information such as times or words.) 

- Using the example that we did in class, create the directory structure and
	the necessary files in your Github repository, in a new directory (folder)
	called "simpleConnectedDeviceAssignment". Create the three files we looked
	at (server.js, client.js, index.html). Fill them out as best you can, and
	write "psuedocode" or comments for the parts that you don't know how to do
	yet. I do not expect this program to work yet.

	Write an Arduino sketch (also in "simpleConnectedDeviceAssignment") that
	will implement the Arduino side of your project. Model it after the UDP
	programs that we wrote. This program should handle any sensors and actuators
	on your Arduino, but does not need to work on the network yet. 
	Again, use "psuedocode" or comments 
	for the parts that you don't know how to do yet.

#### Tuesday 5 March 2019 11:50 - 1:05 

- using command line git to pull your code

#### Thursday 7 March 2019 11:50 - 2:30 

Study example to 
- Allow client (browser) to send message back to server
- Arduino connects to server and sends data to server but it's not handled yet

in my repository resourcesForClasses
file: src/nodePrograms/udpAndHttpServer

#### Homework due Tuesday 12 March 2019

Start implementing your connected device
- Create a system diagram, similar to the one on page 192 in "Making Things
	Talk". This can be hand drawn.
- Create a schematic. This can be hand drawn.
- Create a flow chart of the logic. You have at least four programs to
	consider: the web server (server.js), the web page (index.html), 
	the node code running in the browser (client.js), and the Arduino program.
- Create a new directory (folder) in your connected device directory called
	"src", and in there create server.js and arduino.ino. 
	Create a directory in src called
	"public", and in there put index.html and client.js. This is simlar to the
	structure I have in resourcesForClasses/src/nodePrograms/udpAndHttpServer;
- Start writing your program. Start with the simplest things, and test each
	stage. For example
	1. Get a webserver running. This is server.js and index.html. Go back to the
		 simple server.js that we did at the begining of the semester. Test using
		 your browser.
	1. Add any controls you need. So far we just know how to do buttons. Next
		 week you will learn how to input numbers (e.g. times) etc. Test that the
		 buttons work by using console.log
	1. Add a client.js program that gets a message when the buttons are pressed.
		 Test.
	1. Add a method to send the button events from client.js back to the server.
		 Test.
	1. Build your Arduino circuit. Don't build your device yet. Use the
		 solderless breadboard, use pushbuttons and potentiometers instead of
		 specific sensors, and use LEDs instead of other actuators.
	1. Write an Arduino program to work with your sensors and actuators. 
	1. Test the Arduino setup.
- Make clear comments for any part you don't know how to do. This will remind
	you what you need to figure out next and will help me focus on teaching you
	what you need in order to finish this project.
- Put this all in your Github repository. Remember to push your code often so
	that nothing gets lost.

#### Tuesday 12 March 2019 11:50 - 1:05 

**Show your work**
- System Diagram
- Schematic
- Program

**Announcement**
I'll be out of town April 11 and April 13. We need to make up the day some
other time. Options include extending some of our regular meetings, or meeting
another day. What works?

**What do you need in order to finish your project?**
- Most likely, review udpAndHttpServer


#### Homework due Thursday 14 March

- As we discussed in class, we will have a 5 hour class on March 16 to make up
	for April 11 and April 13.

- Continue to make progress on your projects

#### Thursday 31 January 11:50 AM - 2:30 PM

- Finish review of
	[udpAndHttpServer](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/nodePrograms/udpAndHttpServer)

- Look at
	[slider](https://github.com/michaelshiloh/resourcesForClasses/tree/master/src/nodePrograms/slider): Add a slider to a webpage so you can input values and send them to the server

- Work on your projects, with small lectures as needed

#### Tuesday 2 April 2019 11:50 - 1:05 

Welcome back! I hope you had a great spring break.

1. Project status 
1. Introduction to Raspberry Pi
	1. Desktop
	1. uSD card
	1. Console
1. Next meeting is Tuesday April 9

#### Homework due Tuesday 9 April 2019

**Work on your project (due Thursday April 11)**

**Prepare your Raspberry Pi (due Tuesday April 9)**

1. create your Raspberry Pi bootable uSD card. Download and follow the
		instructions for NOOBS 
		[here](https://www.raspberrypi.org/documentation/installation/noobs.md). An
		alternate set of instructions (with a different SD card writing program) is
		[here](https://www.raspberrypi.org/documentation/installation/installing-images/README.md), which might be a useful alternative.
		Alternately, there are tons of other instructions online, including
		[video instructions](https://www.raspberrypi.org/help/videos/) 
		if you prefer.  

		Download the ZIPfile for the full NOOB "Offline and network install"

3. Insert the SD card into the Raspberry Pi  

2. Go to the IM lab and borrow a monitor, a keyboard, and a mouse.  
			[This](https://www.imore.com/how-get-started-using-raspberry-pi) set of
			instructions has a pretty good picture of how to plug them in.

3. Follow the setup instructions to install the recommended version of Raspian

		**Note** if you select the locale of UAE it will only give you the option
		of an Arabic language. If you prefer English, chose a country that
		uses English (e.g. USA or UK) and you can change the locale later 
		if you wish.

3. When you reboot, configure your Raspberry Pi on the IMNetwork. It
			won't work yet on the NYU network.  

4. Enable ssh. It turns out that ssh is already installed on your
		Raspberry Pi, you just need to enable it. Good instructions are
		[here](https://thepi.io/how-to-ssh-into-the-raspberry-pi/).  

Don't worry if this doesn't work perfectly. We will spend some time next week
solving any problems. The goal is to get as many of you as far as possible
before Tuesday.

#### Tuesday 9 April 2019 11:50 - 1:05 

**Announcements**

1. Remember that I will be absent from April 10 - April 15. This means that we
will in fact look at the projects on April 18.

**Lesson**

1. Introduction to Raspberry Pi

#### Homework due Thursday 18 April 2019

1. Finish your project 

#### Homework due Tuesday 16 April 2019

1. Magda made an excellent suggestion: Use VNC to get a virtual desktop from
	 your Raspberry Pi on your laptop. This will give you full access
	to you Raspberry Pi windowing environment from your laptop. If you plan to
	use a Raspberry Pi, this will relieve you from getting a monitor from the
	lab. If you want to do this it's pretty easy:
	1. Enable VNC server on your Raspberry Pi, 
	the same way you enabled the SSH server:   
		1. Preferences -> Raspberry Pi Configuration
		1. Interfaces
		1. VNC: Enabled
	1. Download and install the [realVNC](www.realvnc.com) viewer to your laptop 
	1. On your laptop, run VNC Viewer and enter the IP address of
		your Raspberry Pi in the search bar
	1. Follow the prompts to enter your username and password

1. Read chapters 1-3 from "Wireless Sensor Networks". 
Don't worry about all the details, 
just try to get the general idea.

1. Read either
	 [this](https://www.deviceplus.com/how-tos/arduino-guide/nrf24l01-rf-module-tutorial/) 
	 or 
	 [this](https://howtomechatronics.com/tutorials/arduino/arduino-wireless-communication-nrf24l01-tutorial/)
	 nRF24L01 tutorial.
Don't worry about all the details, 
just try to get the general idea.

Think about what you'd like to do for a final project. The theme this year
is "A place where the virtual/game world intersects with the real/actual
world". You can interpret this in any way you want!

#### Tuesday 16 April 2019 11:50 - 1:05 

Other radios

- nRF24L01
- XBee

#### Thursday 16 April 11:50 AM - 2:30 PM

- Share projects
- Construction techniques
	- Soldering
	- Prototype shields

### current-homework-assignment

#### Homework due Tuesday 23 April 2019

1. Read one of
	 [these](https://github.com/michaelshiloh/resourcesForClasses#soldering) 
	 guides on soldering
1. Practice soldering
	1. Wire loops (at least 5 wire each)
		1. Solid core wire to stranded wire
		1. Stranded wire to stranded wire
	1. Wire to circuit board (at least 5 of each)
		1. Solid core wire to circuit board
		1. Stranded core wire to circuit board
	1. Components to circuit board (at least 5 of each)
		1. 470K ohm resistors to circuit board (actually you can use any
		resistor but I chose this value because we have lots and they don't get
		used often
1. Read chapters 2, 3, 4, and 5 
	in **Designing Connected Products**. 
	Don't be alarmed by the quantity, it goes pretty quickly.
