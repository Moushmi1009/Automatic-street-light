This project demonstrates an automatic street light system using an Arduino Uno and an LDR (Light Dependent Resistor).

The LDR detects the surrounding light intensity and the Arduino controls the street light accordingly.

- ☀️ During bright light: LEDs remain OFF
- 🌙 During darkness: LEDs automatically turn ON

## 🛠️ Components Used

- Arduino Uno
- LDR (Photoresistor)
- 10kΩ Resistor
- 220Ω Resistor
- LED
- Jumper Wires
- Breadboard

## ⚙️ Working Principle

The LDR senses the intensity of surrounding light. A voltage divider circuit is created using the LDR and a 10kΩ resistor. The analog value from the LDR is read by the Arduino through the A0 pin.

If the detected light intensity is below the defined threshold, the Arduino turns the LED ON. Otherwise, the LED remains OFF.

## 💻 Software Used

- Arduino IDE / Tinkercad Circuits

## 🔌 Pin Connections

| Component | Arduino Pin |
|-----------|-------------|
| LDR | A0 |
| LED | D8 |
| LDR Supply | 5V |
| LED Ground | GND |

## 🎯 Applications

- Automatic street lighting
- Energy-saving lighting systems
- Smart lighting systems
- Outdoor lighting automation

## 🚀 Future Improvements

- Add multiple street lights
- Use a relay to control high-power lamps
- Add an IoT module for remote monitoring
- Add motion detection using a PIR sensor
