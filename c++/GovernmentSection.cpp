// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections using c++
#include "GovernmentSection.h"

GovernmentSection::GovernmentSection() : Goa_Legislative("Government"){
    subsections.push_back(Subsection("Governer : Shri. P. S. Sreedharan Pillai"));
    subsections.push_back(Subsection("Chief Minister : Shri. Pramod Sawant"));
}

std::vector<Subsection> GovernmentSection::getSubsections(){
    return subsections;
}