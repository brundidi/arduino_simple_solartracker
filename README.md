<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Solar Tracker README</title>
</head>
<body>
  <header>
    <h1>Solar Tracker</h1>
  </header>

  <section class="description">
    <h2>Description</h2>
    <p>This project implements a <strong>solar tracker</strong> using a servo motor and two Light Dependent Resistors (LDR) to adjust the orientation of a solar panel. The tracker adjusts the panel's position based on the light detected by the LDRs, allowing the panel to face the sun and maximize solar energy production.</p>
  </section>

  <section class="hardware">
    <h2>Required Hardware</h2>
    <ul>
      <li>1 Arduino (Uno, Nano, or compatible)</li>
      <li>1 Servo motor</li>
      <li>2 Light Dependent Resistors (LDR)</li>
      <li>2 Resistors (10kΩ or similar)</li>
      <li>Jumper wires</li>
      <li>Breadboard</li>
      <li>Solar panel (optional, for actual application)</li>
    </ul>
  </section>

  <section class="circuit">
    <h2>Circuit Diagram</h2>
    <p>1. <strong>Servo motor</strong>: connected to pin 7 on the Arduino.</p>
    <p>2. <strong>LDR1</strong>: connected to analog pin A0.</p>
    <p>3. <strong>LDR2</strong>: connected to analog pin A1.</p>
    <p>4. Use two 10kΩ resistors to create a voltage divider for each LDR.</p>
  </section>

  <section class="how-it-works">
    <h2>How It Works</h2>
    <ol>
      <li>The code begins by initializing the servo and the LDR pins.</li>
      <li>The LDR values are read continuously. If both LDRs detect light above a certain threshold, the system considers the panel to be centered and prints "centered" to the serial monitor.</li>
      <li>If LDR1 detects more light than LDR2, the servo angle is increased to move the panel toward the light.</li>
      <li>If LDR2 detects more light than LDR1, the servo angle is decreased to adjust the panel's position.</li>
      <li>The servo angle is adjusted by 1° each iteration, with a delay defined by the <code>SPEED</code> constant.</li>
    </ol>
  </section>

  <section class="installation">
    <h2>Installation</h2>
    <ol>
      <li>Download or clone this repository.</li>
      <li>Open the <code>.ino</code> file in the Arduino IDE.</li>
      <li>Connect your Arduino to your computer via USB.</li>
      <li>Select the appropriate model and port in the Arduino IDE.</li>
      <li>Upload the code to your Arduino.</li>
    </ol>
  </section>

  <section class="license">
    <h2>License</h2>
    <p>This project is licensed under the <strong>MIT License</strong>.</p>
  </section>

  <footer>
    <p>&copy; 2025 Solar Tracker Project</p>
  </footer>
</body>
</html>
