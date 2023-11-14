# Robodog Project

## 1. Abstract

For this experiment, the student builds a robodog using motors for movement, an Arduino board for code storage, a power source, and a customizable body. The project aims to ensure the robodog can move six feet in a straight line, requiring continuous testing and refinement of both code and structure.

## 2. Introduction and Background Theory

The project integrates design, physics, coding, and the use of Arduino, fostering hands-on learning. Arduino, as the world’s leading open-source hardware and software ecosystem, provides a practical environment for coding and robotics basics. Robotics plays a crucial role in enhancing various aspects of life, from job safety to household items and transportation systems.

## 3. Procedure and Apparatus

### Procedure:

1. Assemble the Arduino board with wires and connect it to servo motors.
2. Hook up the Arduino board to a computer and test the code using the Arduino program.
3. Adjust servo motor angles in the code to achieve the desired walking motion.
4. Connect servo motors to the Arduino board.
5. Build the dog's body with a material of choice, ensuring it's not too heavy.
6. Connect legs to motors, position them correctly, and ensure a proper structure for movement.
7. Connect a portable power source to the Arduino board's battery terminal.
8. Adjust code or leg structure to make the dog move six feet in a straight line.
9. Structure the dog's body to accommodate both the Arduino board and the power source.
10. Conduct a race with specified rules.

### Apparatus:

- Arduino board
- Laptop or Computer (for Arduino code)
- Robodog’s legs and body (material of choice)
- Wires
- Breadboard (optional)
- Servo Motors
- Power source
- Cable (for connecting power to the Arduino board)

## 4. Results and Analysis

The experiment focused on utilizing Arduino software, building circuits, and applying engineering skills to design a functional robot dog. Challenges were encountered in the design phase, leading to multiple failures. Successful design involved using a laser wood cutter provided by the University. The presented dog design achieved the desired weight, structure, and aesthetic appeal.

- Figure 1: [Image of the Robodog](link-to-image1.png)
- Figure 2: [Arduino Code](link-to-image2.png)

## 5. Conclusion

The student successfully achieved the project goal of making the robodog walk six feet in a straight line, securing 3rd place in the competition. The durable and efficient spider-like model with only two motors showcased effective design. A minor discrepancy could have been addressed by decreasing the delay time for leg movement.

## 6. References

- [Arduino About Us](https://www.arduino.cc/en/Main/AboutUs)
- [Diva-Portal Article](https://www.diva-portal.org/smash/get/diva2:646174/FULLTEXT01.pdf)

## Arduino Code

robo.cpp
#include <Servo.h>

//constants
Servo FRServo, BKServo;
char forward[] = {15, 25, 25, 25, 25, 15, 15, 15};

void setup()
{
   FRServo.attach(3);
   BKServo.attach(5);
}

void loop()
{
  for (int n = 0; n < 4; n++)
  {
    FRServo.write(forward[2 * n]);
    BKServo.write(forward[(2 * n) + 1]);
    delay(100);
  }
}
