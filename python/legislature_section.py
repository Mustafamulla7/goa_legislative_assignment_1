# Author : Mustafa Mulla
# Roll No : 27
from typing import List
from goa_legislative import GoaLegislative
from subsection import Subsection

class LegislatureSection(GoaLegislative):
    def __init__(self):
        super().__init__("Legislature")
        self._subsections = [
            Subsection("Speaker : Shri. Ramesh Tawadkar"),
            Subsection("Deputy Speaker : Shri. Joshua De Souza"),
            Subsection("Secretary : Smt. Namrata Ulman")
        ]

    def get_subsections(self) -> List[Subsection]:
        return self._subsections
