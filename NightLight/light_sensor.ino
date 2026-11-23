// light_sensor.ino - reads the photoresistor on LIGHT_SENSOR_PIN
// Returns 0 (dark) up to 1023 (bright).

int readLight(const int numSamples) {
  // TODO Task 1 (Developer A): average SENSOR_SAMPLES readings.
  int sum = 0;
  for (int i = 0; i < numSamples; i++) {
    sum += analogRead(LIGHT_SENSOR_PIN);
    delay(10); // Small delay to stabilize readings
  }
  return sum / numSamples;
}

// TODO Task 8 (Project Manager): add lightLabel() below this line.
