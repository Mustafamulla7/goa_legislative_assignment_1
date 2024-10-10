// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#ifndef LEGISLATURE_SECTION_H
#define LEGISLATURE_SECTION_H

#include <vector>
#include "Subsection.h"
#include "Goa_Legislative.h"

class LegislatureSection : public Goa_Legislative{
    private:
        std::vector<Subsection> subsections;

    public:
        LegislatureSection();
        std::vector<Subsection> getSubsections() override;
};

#endif