// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
// #include <iostream>
// #include <vector> 
// #include "LegislatureSection.h"
// #include "GovernmentSection.h"
// #include "HouseSection.h"

// // Main function
// int main() {
//     LegislatureSection legislatureSection;
//     GovernmentSection governmentSection;
//     HouseSection houseSection;

//     auto legislatureSubsections = legislatureSection.getSubsections();
//     auto governmentSubsections = governmentSection.getSubsections();
//     auto houseSubsections = houseSection.getSubsections();

//     std::cout << "Legislature Section" << std::endl;
//     for (const auto& subsection : legislatureSubsections) {
//         std::cout << "- " << subsection.getSubsectionName() << std::endl;
//     }

//     std::cout << "Government Section" << std::endl;
//     for (const auto& subsection : governmentSubsections) {
//         std::cout << "- " << subsection.getSubsectionName() << std::endl;
//     }

//     std::cout << "House Section" << std::endl;
//     for (const auto& subsection : houseSubsections) {
//         std::cout << "- " << subsection.getSubsectionName() << std::endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include "LegislatureSection.h"
#include "GovernmentSection.h"
#include "HouseSection.h"

void printSubsections(const std::vector<Subsection>& subsections) {
    for (const auto& subsection : subsections) {
        std::cout << "- " << subsection.getSubsectionName() << std::endl;
    }
}

int main() {
    LegislatureSection legislatureSection;
    GovernmentSection governmentSection;
    HouseSection houseSection;

    auto legislatureSubsections = legislatureSection.getSubsections();
    auto governmentSubsections = governmentSection.getSubsections();
    auto houseSubsections = houseSection.getSubsections();

    std::cout << "1: Legislature Section\n2: Government Section\n3: House Section\n";
    std::cout << "Please enter choice: ";
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Legislature Section" << std::endl;
            printSubsections(legislatureSubsections);
            break;
        case 2:
            std::cout << "Government Section" << std::endl;
            printSubsections(governmentSubsections);
            break;
        case 3:
            std::cout << "House Section" << std::endl;
            printSubsections(houseSubsections);
            break;
        default:
            std::cout << "Please select a valid input" << std::endl;
            break;
    }

    return 0;
}

