// button.ino - reads the pushbutton on BUTTON_PIN
// The button connects the pin to GND, so a press reads LOW.

// Should return true once for each press of the button.
bool buttonPressed() {
  // TODO Task 3 (Developer C): debounce, and detect one press (not a held button).
  static bool previousState = HIGH;  // button not pressed
  static unsigned long lastDebounceTime = 0;  
  static bool buttonState = HIGH;  // current reading from the button pin 
  bool reading = digitalRead(BUTTON_PIN);
  if (reading != previousState) {
    lastDebounceTime = millis();
  }
  previousState = reading;

  if ((millis() - lastDebounceTime) > BUTTON_DEBOUNCE_MS) {
    if (reading != buttonState) {
      buttonState = reading;
      return buttonState == LOW;  // return true if the button is pressed
    }

  }
  
  return false;
}



