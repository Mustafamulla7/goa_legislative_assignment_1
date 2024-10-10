// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        LegislatureSection legislatureSection = new LegislatureSection();
        GovernmentSection governmentSection = new GovernmentSection();
        HouseSection houseSection = new HouseSection();

        List<Subsection> legislatuerSubsections = legislatureSection.getSubsections();
        List<Subsection> governmentSubsections = governmentSection.getSubsections();
        List<Subsection> houseSubsections = houseSection.getSubsections();
        Scanner scanner = new Scanner(System.in);
        System.out.println("1: Legislature Section\n2: Government Section\n3: House Section");
        System.out.println("Please entter choice: ");
        String choice = scanner.next().trim();

        switch (choice) {
            case "1":
                System.out.println("Legislature Section");
                printSubsections(legislatuerSubsections);
                break;
            case "2":
                System.out.println(("Government Section"));
                printSubsections(governmentSubsections);
                break;
            case "3":
                System.out.println("House Section");
                printSubsections(houseSubsections);
                break;
            default:
                System.out.println("Please select a valid input");
                break;
        }
        scanner.close();


    }

    private static void printSubsections(List<Subsection> subsections) {
        for (Subsection subsection : subsections) {
            System.out.println("- " + subsection.getSubsectionName());
        }
    }
}