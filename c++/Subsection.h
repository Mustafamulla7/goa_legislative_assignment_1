// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#ifndef SUBSECTION_H
#define SUBSECTION_H

#include <string>

class Subsection{
    private:
        std::string subsectionName;

    public: 
        Subsection(std::string subsectionName);
        std::string getSubsectionName() const;
};

#endif
