// led.ino - controls the LED brightness (0 = off, 255 = full brightness)

int ledBrightness = 0;   // remembers the current brightness
const int FADE_STEP = 1; // how much to change the brightness each time
void setLed(int brightness) {
  ledBrightness = constrain(brightness, 0, 255);
  analogWrite(LED_PIN, ledBrightness);
}

// Moves the LED toward the target brightness.
void fadeTowards(int target) {
  // TODO Task 2 (Developer B): fade in small steps instead of jumping.

  target = constrain(target, 0, 255);

  if (ledBrightness < target) {
    setLed(ledBrightness + FADE_STEP);
  } else if (ledBrightness > target) {
    setLed(ledBrightness - FADE_STEP);
  }
}

// TODO Task 7 (Developer C): add blinkLed() below this line.
