// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#include "LegislatureSection.h"

LegislatureSection::LegislatureSection() : Goa_Legislative("Legislature")
{
    subsections.push_back(Subsection("Speaker : Shri. Ramesh Tawadkar"));
    subsections.push_back(Subsection("Deputy Speaker : Shri. Joshua De Souza"));
    subsections.push_back(Subsection("Secretary : Smt. Namrata Ulman"));
}

std::vector<Subsection> LegislatureSection::getSubsections()
{
    return subsections;
}