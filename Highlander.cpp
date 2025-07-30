#include "Highlander.h"
#include <iostream>

int Highlander::count = 0;

Highlander::Highlander() {
    name = "Unnamed";
    count++;
}

Highlander::Highlander(const std::string& name) : name(name) {
    count++;
}

Highlander::~Highlander() {
    count--;
}

std::string Highlander::speak() {
    return "There can be only one. But now there are " + std::to_string(count);
}

std::string Highlander::status() const {
    return (count == 1) ? "Immortal" : "Murderous";
}
