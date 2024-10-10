// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#ifndef HOUSESECTION_H
#define HOUSESECTION_H

#include <vector>
#include "Subsection.h"
#include "Goa_Legislative.h"
#include "LegislatureSection.h"
#include "GovernmentSection.h"

class HouseSection : public Goa_Legislative{
    private:
        std::vector<Subsection> subsections;
    
    public: 
        HouseSection();
        std::vector<Subsection> getSubsections() override;
};

#endif