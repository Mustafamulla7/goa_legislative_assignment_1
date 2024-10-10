# Author : Mustafa Mulla
# Roll No : 27
from legislature_section import LegislatureSection
from government_section import GovernmentSection
from house_section import HouseSection

def print_subsections(subsections):
    for subsection in subsections:
        print(f"- {subsection.get_subsection_name()}")

def main():
    legislature_section = LegislatureSection()
    government_section = GovernmentSection()
    house_section = HouseSection()

    legislature_subsections = legislature_section.get_subsections()
    government_subsections = government_section.get_subsections()
    house_subsections = house_section.get_subsections()

    print("1: Legislature Section\n2: Government Section\n3: House Section")
    choice = input("Please enter choice: ").strip()

    if choice == "1":
        print("Legislature Section")
        print_subsections(legislature_subsections)
    elif choice == "2":
        print("Government Section")
        print_subsections(government_subsections)
    elif choice == "3":
        print("House Section")
        print_subsections(house_subsections)
    else:
        print("Please select a valid input")

if __name__ == "__main__":
    main()
