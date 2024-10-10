// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
#include "Subsection.h"

Subsection::Subsection(std::string subsectionName){
    this->subsectionName=subsectionName;
}

std::string Subsection::getSubsectionName() const{
    return subsectionName;
} 