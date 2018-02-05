## New York University Abu Dhabi
## Interactive Media
# Network Everything
### Course Number: IM-UH 2112
### Spring 2018

**Everything can be found on the course website:**   
[https://github.com/michaelshiloh/NetworkEverything](https://github.com/michaelshiloh/NetworkEverything/)

Quick
[link](https://github.com/michaelshiloh/NetworkEverything/blob/master/schedule.md#current-homework-assignment)
to current homework assignment

# Schedule

This schedule is subject to change
_

#### Tuesday 23 January 2018 9am - 10:15
- What’s the class about
- Introductions
- Syllabus review
- Summary:
	-  Be present and participate in class
	-  No electronic distractions
	-  Be proactive: Communicate with me regarding difficulties, problems, illness, etc.
	-  Allow lots of time for homework as physical construction 
	and
	debugging circuits and programs 
	can be very time consuming.

#### Homework due Thursday 25 January 
- **Update**
	- Storage allocation has not been determined yet so you don't need to label
	  your shelf yet
	- I have reduced the amount of reading from Making Things Talk
- **Read**
	- Linked, Chapters 1-3
	-	Making Things Talk 
		- pp xi-xviii
		- pp 1-5
		- pp 24-27
		- browse 28-35
	- If you are not familiar with Arduino, read Intro through Lesson 3 of Adafruit's [Arduino
		tutorial](http://www.ladyada.net/learn/arduino/index.html) 
- **Do**
	- Download the Arduino IDE (ARDUINO 1.8.5) from
		[here](https://www.arduino.cc/en/Main/Software)
	- Try to install it if you can but don’t worry if you have trouble.   
		We’ll do that in class.  
	- Create a GitHub account and create a repository for this class. 
	[Here](https://github.com/michaelshiloh/resourcesForClasses#github-resources)
	are some instructions
	- Write a reaction to the three chapters from Linked 

#### Thursday 25 January 9am - 11:40
- Github: 
	- Use blank lines to separate paragraphs
	- Rename your file .md to prevent runon lines
	- Github resources
		[here](https://github.com/michaelshiloh/resourcesForClasses#github-resources)
	- You can look at my files to see how I've done things
- Discussion: Linked
- Arduino
	- What is it?
	- Inputs and outputs, analog and digital
	- IDE, examples
	- Blink
	- Solderless breadboard
	- LEDs
	- Sensors
		- Momentary switch
		- LDR
	- Conditionals
	- Combining examples

#### Homework due Tuesday 30 January 2018
- **Reading**
	- Review the Getting Started with Arduino / Genuino Uno
    [tutorial](https://www.arduino.cc/en/Guide/ArduinoUno)
	- Review the Blink [tutorial](http://arduino.cc/en/Tutorial/Blink)
	- Read the DigitalReadSerial 
	[tutorial](http://arduino.cc/en/Tutorial/DigitalReadSerial)
	- Read the AnalogReadSerial 
	[tutorial](http://arduino.cc/en/Tutorial/AnalogReadSerial)
	- Read the Fade [tutorial](http://arduino.cc/en/Tutorial/Fade)
shows how to use the `analogWrite()` function
	- Review either Sparkfun's [How to Use a
    Breadboard](https://learn.sparkfun.com/tutorials/how-to-use-a-breadboard)
    tutorial or Adafruit's [Breadboards for
		Beginners](https://learn.adafruit.com/breadboards-for-beginners?view=all)
		tutorial
	- Watch
		[this](https://www.khanacademy.org/math/algebra-home/alg-intro-to-algebra/algebra-alternate-number-bases/v/number-systems-introduction) Khan Academy Introduction to number systems and binary

#### Tuesday 30 January 2018 9am - 10:15 
- Review analog/digial/input/output
- Variables
- Conditionals
- turn light on button pressed
- Can we use this to communicate?

#### Homework due Thursday February 1 

**Do**
- Find an example of a **useful** IoT device  
- Find an example of a **useless** IoT device  
- Write a post in your repository. Provide links to these devices and discuss
your reasons   

**Update**  
I've assigned some reading for next Tuesday. You may want to get started now.
See further below.  

#### Thursday February 1 9am - 11:40
- Share your IoT failures and successes  
	- One of you did not mail me his Github link  
- Serial communications  
	- Review: Last time we exchanged 1 bit (one switch, one LED) on one wire  
	- What if we have 15 switches and 15 LEDs?  
		- Counting in Binary  
		- More than one bit on one wire  
	- What about information that isn't numbers?  
		- ASCII encoding  
		- Why do we have ASCII code for digits?    
- `for()` loops  
- Arduino/Processing communication examples (File -> Examples -> Communication):  
	- From Processing to Arduino  
		- Dimmer (single number from Processing to Arduino)  
	- From Arduino to Processing  
		- Graph (single number from Arduino to Processing)  
- binary numbers  

### current-homework-assignment
#### Homework for Tuesday February 6  

**Do**

- Do the VirtualColorMixer example from the Arduino Communication examples,
	which sends multiple bytes from Arduino to Processing to control the color
	of the Processing canvas. 
	Refer to the Virtual Color Mixer
	[tutorial](https://www.arduino.cc/en/Tutorial/VirtualColorMixer) but don't
	use the sensors it pictures; instead use the small blue potentiometers
	that are in your kit. 
	
	**If you are new to potentiometers please ask for
	help, either from me or someone in the lab** 

	If this example give you Nan (Not a Number) errors, replace
	`serialEvent()` with
		[this](https://github.com/michaelshiloh/ArduinoExamples/blob/master/twoWayComms/improvedGraphSerialEvent/improvedGraphSerialEvent.ino)  

**Read**  

- Linked, Chapter 4  
- One of the Shift registers
	[resources](https://github.com/michaelshiloh/resourcesForClasses#shift-register-resources)    
- The Sparkfun Serial communication
	[tutorial](https://github.com/michaelshiloh/resourcesForClasses#sparkfun-serial-communication-tutorial).
	This is pretty detailed - you don't need to understand everything but try to
	familiarize yourself with the main concepts  
- One of the soldering
	[resources](https://github.com/michaelshiloh/resourcesForClasses#soldering)  

#### Tuesday 6 February 2018 9am - 10:15 (Tentative)
**Announcements**  
	- **Sign Up for the IM Student Email List**   
		Have a question?
		Looking for a place to share ideas?
		The IM student mailing list is a student-only group
		where you can ask for help,
		post information about cool events
		and anything else you think would benefit your fellow makers
		Sign up by sending an email to **mk4908@nyu.edu**  
	- [24X](http://nyuad.im/24x)  
	- Sign up for Interactive Media [newsletter](http://nyuad.im/newsletter)

- Review VirtualColorMixer
	- `while ( > 0)`
	- `Serial.available()`
	- `Serial.parseInt()`
	- `if (Serial.read() == '\n')`
	- `constrain(red, 0, 255)`
	- `green = 255 - constrain(green, 0, 255)`
	- `analogWrite(bluePin, blue)`
	- `Serial.print(red, HEX)`

- Sending data from Processing to Arduino  
	- ReadAsciiString (multiple ASCII value from Processing to Arduino:
		Three numeric values from Processing control an RGB LED on Arduino)  
		What can go wrong here?    
		If this example give you Nan (Not a Number) errors, replace
		`serialEvent()` with
		[this](https://github.com/michaelshiloh/ArduinoExamples/blob/master/twoWayComms/improvedGraphSerialEvent/improvedGraphSerialEvent.ino)  

- Arrays  
	- `for()` loops
	- Array example

- Bidirectional  communication between  Arduino and Processing  
	- Arduino SerialCallAndResponse example  

Tentative homework for Thursday February 8  

**Read**  

– Designing Connected Products Ch 3 & 5.


#### Tentative order of topics

- Serial communication (Synchronous and  Asynchronous 

- Wireless (Serial, point - to - point)

- Ethernet and internet

- WiFi

- Raspberry Pi

- Linux command line

- Python, SSH, cURL

- Debugging Ethernet with wireshark

- Xbee
