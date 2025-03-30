#pragma once

//-----include section-----
#include "Constans.h"
#include <iostream>
#include <fstream>
#include <string>
#include <chrono>   //For sleep functionality
#include <thread>   //For sleep functionality


//-----class section-----
class Help
{
public:
    //constructor
    Help();
    //destructor
    ~Help();

    //functions
    void readHelpFromText(int delayMilliseconds = 30);

private:
    std::ifstream m_helpTxt;
};