// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
using System.Collections.Generic;

public class GovernmentSection : GoaLegislative {
    private List<Subsection> subsections;

    public GovernmentSection() : base("Government") {
        subsections = new List<Subsection> {
            new Subsection("Governor : Shri. P. S. Sreedharan Pillai"),
            new Subsection("Chief Minister : Shri. Pramod Sawant")
        };
    }

    public override List<Subsection> GetSubsections() {
        return subsections;
    }
}
