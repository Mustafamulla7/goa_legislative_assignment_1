// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
import java.util.List;

public abstract class Goa_legislative {
    private String sectionName;

    public Goa_legislative(String sectionName){
        this.sectionName=sectionName;
    }

    public String getSectionName(){
        return sectionName;
    }

    public abstract List<Subsection> getSubsections();
}


