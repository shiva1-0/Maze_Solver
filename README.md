# Maze_Solver

This project is an Arduino-based Line Following Robot that uses infrared (IR) sensors to detect and follow a black line on a white surface. The system processes sensor inputs through an Arduino microcontroller, which then controls the motors to adjust movement accordingly.

## Features
- **Automatically Follows a Line**: Uses IR sensors to detect and follow a path.
- **Basic Obstacle Handling**: Adjusts direction if it deviates from the line.
- **Real-time Adjustments**: Continuously reads sensor data and moves accordingly.

## Hardware Requirements
- Arduino Uno
- L298N Motor Driver Module
- DC Motors 
- IR Sensors 

## Software Requirements
- Arduino IDE

## Working Principle
- The IR sensors detect the black line and send signals to the Arduino.
- The Arduino processes the data and decides whether to move forward, turn left, or turn right.
- The motor driver receives signals from the Arduino and controls the movement of the motors.
- If the robot moves off the line, it automatically corrects its path.
- The system continuously repeats this process, ensuring the robot stays on track.
