// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
using System;
using System.Collections.Generic;

public class Program {
    public static void Main(string[] args) {
        LegislatureSection legislatureSection = new LegislatureSection();
        GovernmentSection governmentSection = new GovernmentSection();
        HouseSection houseSection = new HouseSection();

        List<Subsection> legislatureSubsections = legislatureSection.GetSubsections();
        List<Subsection> governmentSubsections = governmentSection.GetSubsections();
        List<Subsection> houseSubsections = houseSection.GetSubsections();

        Console.WriteLine("1: Legislature Section\n2: Government Section\n3: House Section");
        Console.Write("Please enter choice: ");
        string choice = Console.ReadLine().Trim();

        switch (choice) {
            case "1":
                Console.WriteLine("Legislature Section");
                PrintSubsections(legislatureSubsections);
                break;
            case "2":
                Console.WriteLine("Government Section");
                PrintSubsections(governmentSubsections);
                break;
            case "3":
                Console.WriteLine("House Section");
                PrintSubsections(houseSubsections);
                break;
            default:
                Console.WriteLine("Please select a valid input");
                break;
        }
    }

    private static void PrintSubsections(List<Subsection> subsections) {
        foreach (var subsection in subsections) {
            Console.WriteLine("- " + subsection.GetSubsectionName());
        }
    }
}
