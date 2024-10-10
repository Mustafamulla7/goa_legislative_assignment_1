// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections 
using System.Collections.Generic;

public abstract class GoaLegislative {
    private string sectionName;

    public GoaLegislative(string sectionName) {
        this.sectionName = sectionName;
    }

    public string GetSectionName() {
        return sectionName;
    }

    public abstract List<Subsection> GetSubsections();
}
