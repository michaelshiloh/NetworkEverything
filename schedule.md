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

### current-homework-assignment
#### Homework due Thursday February 1 

**Do**
- Find an example of a **useful** IoT device  
- Find an example of a **useless** IoT device  
- Write a post in your repository. Provide links to these devices and discuss
your reasons   

**Update**  
I've assigned some reading for next Tuesday. You may want to get started now.
See further below.  

#### Tentative homework for Tuesday February 5  

**Read**  
- Linked, Chapter 4
- One of the Shift registers
	[resources](https://github.com/michaelshiloh/resourcesForClasses#shift-register-resources)  
- The Sparkfun Serial communication
	[tutorial](https://github.com/michaelshiloh/resourcesForClasses#sparkfun-serial-communication-tutorial)  

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
- `while()` loops  
- `for()` loops  
- arrays  
- Arduino/Processing communication examples (File -> Examples -> Communication):  
	- From Processing to Arduino  
		- Dimmer (single number from Processing to Arduino)  
		- PhysicalPixel (single ASCII value from Processing to Arduino)  
		- ReadAsciiString (multiple ASCII value from Processing to Arduino)  
            What can go wrong here?  
	- From Arduino to Processing  
		- Graph (single number from Arduino to Processing)  
		- VirtualColorMixer (multiple numbers from Arduino to Processing)  
    If either of these examples give you Nan (Not a Number) errors, replace
		`serialEvent()` with
		[this](https://github.com/michaelshiloh/ArduinoExamples/blob/master/twoWayComms/improvedGraphSerialEvent/improvedGraphSerialEvent.ino)  
	- Bidirectional  
		- Arduino SerialCallAndResponse example  
- shift registers  
- binary numbers  

Tentative homework for Thursday February 7  
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
