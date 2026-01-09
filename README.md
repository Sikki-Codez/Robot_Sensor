# Robot Sensor Simulation

### Description
A C++ robot navigation simulation. It generates random sensor data for four cardinal directions to detect obstacles and calculates the safest path based on the furthest distance. Features modular code design using a custom header file for sensor logic.

### Features
* **Sensor Simulation:** Generates random distance values (0–100) to simulate environmental feedback.
* **Directional Logic:** Algorithms to identify and select the direction with the maximum clearance.
* **Modular Design:** Uses a custom header (`Mylib.h`) to separate sensor processing from the main logic.

### How to Run
1.  Ensure `Mylib.h` is in the same directory as the main `.cpp` file.
2.  Compile the code:
    ```bash
    g++ 2024203_2024302_2024532_miniproject_1.cpp.cpp -o robot_sensor
    ```
3.  Run the simulation:
    * **Windows:** `.\robot_sensor.exe`
    * **Mac/Linux:** `./robot_sensor`
