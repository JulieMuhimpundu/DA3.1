#pragma once
#ifndef HIGHLANDER_H
#define HIGHLANDER_H

#include <string>

class Highlander {
private:
    std::string name;
    static int count;

public:
    Highlander();
    Highlander(const std::string& name);
    ~Highlander();

    static std::string speak();
    std::string status() const;
};

#endif
