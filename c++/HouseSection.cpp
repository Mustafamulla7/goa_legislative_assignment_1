// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#include "HouseSection.h"

HouseSection::HouseSection() : Goa_Legislative("House"){
    subsections.push_back(Subsection("Session Information"));
    subsections.push_back(Subsection("Question List"));
    subsections.push_back(Subsection("Assembly Bills"));
    subsections.push_back(Subsection("Papers laid in the house"));
}

std::vector<Subsection> HouseSection::getSubsections(){
    return subsections;
}