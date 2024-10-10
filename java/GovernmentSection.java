// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
import java.util.ArrayList;
import java.util.List;

public class GovernmentSection extends Goa_legislative {
    private List<Subsection> subsections;

    public GovernmentSection(){
        super("Government");
        this.subsections=new ArrayList<>();

        subsections.add(new Subsection("Governer : Shri. P. S. Sreedharan Pillai"));
        subsections.add(new Subsection("Chief Minister : Shri. Pramod Sawant"));
        // subsections.add(new Subsection("Council of Ministers"));
        // subsections.add(new Subsection("Speeches"));
    }

    @Override
    public List<Subsection> getSubsections(){
        return subsections;
    }
}
