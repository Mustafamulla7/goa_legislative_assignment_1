// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#ifndef GOA_LEGISLATIVE_H
#define GOA_LEGISLATIVE_H

#include <vector>
#include "Subsection.h"

class Goa_Legislative{
    private:
        std::string sectionName;
    
    public: 
        Goa_Legislative(std::string sectionName);
        std::string getSectionName();
        virtual std::vector<Subsection> getSubsections()=0;
};

#endif