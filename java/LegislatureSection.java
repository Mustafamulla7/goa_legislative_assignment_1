// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
import java.util.ArrayList;
import java.util.List;

public class LegislatureSection extends Goa_legislative{
    private List<Subsection> subsections;

    public LegislatureSection(){
        super("Legislature");
        this.subsections= new ArrayList<>();

        subsections.add(new Subsection("Speaker : Shri. Ramesh Tawadkar"));
        subsections.add(new Subsection("Deputy Speaker : Shri. Joshua De Souza"));
        // subsections.add(new Subsection("MLA's"));
        subsections.add(new Subsection("Secretary : Smt. Namrata Ulman"));
        // subsections.add(new Subsection("Infrastructure"));
    }

    @Override
    public List<Subsection> getSubsections(){
        return subsections;
    }
}