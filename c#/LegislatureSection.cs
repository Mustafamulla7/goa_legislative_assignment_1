// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
using System.Collections.Generic;

public class LegislatureSection : GoaLegislative {
    private List<Subsection> subsections;

    public LegislatureSection() : base("Legislature") {
        subsections = new List<Subsection> {
            new Subsection("Speaker : Shri. Ramesh Tawadkar"),
            new Subsection("Deputy Speaker : Shri. Joshua De Souza"),
            new Subsection("Secretary : Smt. Namrata Ulman")
        };
    }

    public override List<Subsection> GetSubsections() {
        return subsections;
    }
}
