
#include "Arduino.h"
#include "mglm.h"

// BasicExample.ino: This example simply shows some examples of how to use the library.

void setup() {

    // Initialize Serial at 115200 baud
    Serial.begin(115200);
    Serial.println("BasicExample: MicroGLM vector library");

    mglm::vec3 v = { 2, 3, 4 };
    mglm::vec3 b = { 5, 2, 9 };

    auto r = v - b;
    float a = mglm::length(mglm::normalize(b - r)) * mglm::length(b * v);
}

void loop() {
    // No loop action
}
