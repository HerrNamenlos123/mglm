# MicroGLM vector library for Arduino

This library provides 2D and 3D vectors like https://github.com/g-truc/glm.
It implements the most important functions while trying to be consistent
with the original library. The vectors are in a `glm` namespace, so code can 
be compiled on desktop platforms using the real `glm` library, and on Arduino 
using the `MicroGLM` port, while keeping the same code.

Example usage:
```cpp
#ifdef ARDUINO
#include <MicroGLM.h>
#else
#include <glm/glm.hpp>
#endif

void foo() {
    glm::vec3 v1(1, 2, 3);
    glm::vec3 v2(4, 5, 6);
    auto v3 = v1 + v2;
    auto v4 = v1 * 2.0f;
    auto v5 = (v1 + v2) / 2.0f + (v1 - v2) / 10.f;

    float dotProduct = glm::dot(v1, v2);
    glm::vec3 crossProduct = glm::cross(v1, v2);

    glm::vec2 velocity;
    glm::vec2 position = glm::vec2(1, 2);
    glm::vec2 flipped = position * glm::vec2(1, -1);
    velocity += position * 0.1f;
}
```

This code will compile both on Arduino and on desktop platforms, given that
the libraries are available.

## License

MIT License

Copyright (c) 2021 HerrNamenlos123

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
