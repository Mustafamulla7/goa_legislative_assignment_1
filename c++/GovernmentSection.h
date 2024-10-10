// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#ifndef GOVERNMENTSECTION_H
#define GOVERNMENTSECTION_H

#include <vector>
#include "Subsection.h"
#include "Goa_Legislative.h"
#include "LegislatureSection.h"

class GovernmentSection : public Goa_Legislative{
    private:
        std::vector<Subsection> subsections;

    public:
        GovernmentSection();
        std::vector<Subsection> getSubsections() override;
};

#endif