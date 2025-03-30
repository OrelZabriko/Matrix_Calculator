//-----include section-----
#include "Help.h"


//-----functions section------
//-----------------------------------------------------------------------------
Help::Help()
{
    m_helpTxt.open(HELP_FILE_NAME);
    if (!m_helpTxt)
    {
        std::cout << "Could not open help file\n";
    }
}


//-----------------------------------------------------------------------------
Help::~Help()
{
    if (m_helpTxt.is_open())
    {
        m_helpTxt.close();
    }
}


//-----------------------------------------------------------------------------
void Help::readHelpFromText(int delayMilliseconds)
{
    if (!m_helpTxt.is_open())
    {
        std::cout << "Help file is not open\n";
        return;
    }

    //Reset file position to beginning in case it was read before
    m_helpTxt.clear();  //Clear any error flags
    m_helpTxt.seekg(0); //Go to the beginning of the file

    std::string line;
    while (std::getline(m_helpTxt, line))
    {
        //Print each character with a small delay
        for (char c : line)
        {
            std::cout << c << std::flush;  //Use flush to ensure immediate display
            std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds));
        }
        std::cout << std::endl;

        //Small pause between lines for better readability
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds * 3));
    }

    std::cout << std::endl;
}