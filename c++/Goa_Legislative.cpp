// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections using c++

#include "Goa_Legislative.h"

Goa_Legislative::Goa_Legislative(std::string sectionName){
    this->sectionName=sectionName;
};

std::string Goa_Legislative::getSectionName(){
    return sectionName;
};