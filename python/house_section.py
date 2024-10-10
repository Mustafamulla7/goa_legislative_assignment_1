# Author : Mustafa Mulla
# Roll No : 27
from typing import List
from goa_legislative import GoaLegislative
from subsection import Subsection

class HouseSection(GoaLegislative):
    def __init__(self):
        super().__init__("House")
        self._subsections = [
            Subsection("Session Information"),
            Subsection("Question List"),
            Subsection("Assembly Bills"),
            Subsection("Papers laid in the house")
        ]

    def get_subsections(self) -> List[Subsection]:
        return self._subsections
