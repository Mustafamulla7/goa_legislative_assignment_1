// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
using System.Collections.Generic;

public class HouseSection : GoaLegislative {
    private List<Subsection> subsections;

    public HouseSection() : base("House") {
        subsections = new List<Subsection> {
            new Subsection("Session Information"),
            new Subsection("Question List"),
            new Subsection("Assembly Bills"),
            new Subsection("Papers laid in the house")
        };
    }

    public override List<Subsection> GetSubsections() {
        return subsections;
    }
}
