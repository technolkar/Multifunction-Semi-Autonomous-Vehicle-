Overview
This project showcases the design and development of an IoT-enabled autonomous robot that combines surveillance, navigation, and object manipulation in a single compact system. The robot can operate in manual and autonomous modes following a line path, avoiding obstacles, streaming real-time video, and controlling a servo-based robotic arm for pick-and-place tasks. It is powered by the ESP32 microcontroller, which provides both Wi-Fi and Bluetooth connectivity for remote control and IoT communication.
The system was entirely self-funded and designed for potential applications in security, logistics automation, and smart agriculture.

Project Description


1️⃣ Concept and Objective
The primary goal of this project was to create a multi-function intelligent robot capable of:
Navigating autonomously using line-following and obstacle-avoidance algorithms.
Streaming live camera footage for surveillance and remote operation.
Picking and placing objects using a servo-controlled robotic arm.
Allowing wireless operation via Bluetooth and IoT dashboard over the Internet.
This project integrates the core domains of embedded systems, robotics, and IoT communication into one versatile platform.

2️⃣ Design and Mechanical Structure
The robot chassis was fabricated using a durable acrylic base plate mounted on four DC geared motors for differential movement. The lower layer holds the battery, ESP32 controller, motor driver, and sensors. The upper layer carries the camera module, servo-based arm, and IoT electronics. A small robotic manipulator arm was constructed using lightweight acrylic links and micro-servos for base rotation, shoulder lift, and gripper actuation. This setup provides stable motion and compact size suitable for indoor or small-scale field environments.

3️⃣ Drive and Navigation System
The movement of the robot is handled by four DC geared motors controlled via an L298N motor driver module. Two front motors and two rear motors provide forward, reverse, and turning actions. For autonomous navigation, the robot combines: Infrared sensors placed at the front underside for line detection. Ultrasonic sensor at the front for obstacle avoidance. When operating in autonomous mode, the robot follows a predefined black line path on the floor. If an obstacle is detected ahead, it automatically stops and takes a detour before returning to the path. In manual mode, all movements can be controlled remotely via Bluetooth or IoT dashboard.

4️⃣ Robotic Arm and Manipulation
A three-degree-of-freedom robotic arm is mounted on top of the chassis.
It consists of: Base rotation servo, Shoulder servo for up-down movement, Gripper servo for holding and releasing objects. The arm can be operated through a mobile interface using slider controls on the IoT dashboard. This feature allows the robot to perform pick-and-place operations such as lifting small objects or sorting items in a workspace.

5️⃣ Surveillance System

For real-time monitoring, Wi-Fi camera module is integrated on the robot’s upper deck. The camera streams live video directly to a web or mobile application, enabling remote surveillance. This feature is especially useful for monitoring restricted areas, warehouses, or greenhouses in agriculture.

6️⃣ Control Electronics and IoT Integration
The entire system is powered and managed by the ESP32 microcontroller, which serves multiple roles: Reads input from ultrasonic and IR sensors. Controls DC motors through the L298N driver. Operates servos of the robotic arm using PWM signals. Manages wireless communication via Wi-Fi (IoT) and Bluetooth. All control commands and sensor feedback are transmitted to an IoT dashboard (like Blynk or MQTT interface). The dashboard allows: Directional control of the robot (forward, reverse, left, right). Live camera feed display. Servo sliders for arm positioning. Obstacle and sensor status indicators. Through this IoT integration, the robot can be operated remotely from any internet-connected device.

7️⃣ Power Management
The robot is powered by a 12V Li-ion rechargeable battery. The main supply is divided into:
12V line for motors and drivers. 5V regulated output for the ESP32 and servos using a buck converter. Switches and fuses are included for protection and power isolation during charging or maintenance.

8️⃣ Working Procedure
Power on the system; ESP32 initializes all modules and connects to Wi-Fi or Bluetooth. If autonomous mode is selected, IR sensors detect the line and drive the motors to follow it. If an obstacle is encountered, the ultrasonic sensor triggers avoidance logic. In manual mode, the user can control movement and arm motion from the mobile IoT dashboard. The camera provides a live video feed for remote observation. The robotic arm can be positioned to pick or place small objects based on live visual feedback.

9️⃣ Features and Capabilities
Fully autonomous navigation with line-following and obstacle avoidance. Bluetooth and IoT-based manual control for flexibility. Integrated robotic arm for pick-and-place functionality. Real-time video streaming for surveillance and monitoring. ESP32-based embedded system, combining sensing, control, and communication. Compact, modular, and battery-powered design. Suitable for security patrols, logistics automation, and smart agriculture.
