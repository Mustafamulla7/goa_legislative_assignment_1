// Author : Mustafa Mulla
// Roll No : 27
// Title : Goa legistalive assembly
// Start date : 15/07/2024
// Modified date :  22/07/2024
// Description : Goa Legislative Assembly's various sections
import java.util.ArrayList;
import java.util.List;

public class HouseSection extends Goa_legislative{
    private List<Subsection> subsections;

    public HouseSection(){
        super("House");
        this.subsections=new ArrayList<>();

        subsections.add(new Subsection("Session Information"));
        subsections.add(new Subsection("Question List"));
        subsections.add(new Subsection("Assembly Bills"));
        subsections.add(new Subsection("Papers laid in the house"));
    }

    @Override
    public List<Subsection> getSubsections(){
        return subsections;
    }
}
