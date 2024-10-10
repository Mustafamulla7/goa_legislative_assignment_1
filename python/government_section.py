# Author : Mustafa Mulla
# Roll No : 27
from typing import List
from goa_legislative import GoaLegislative
from subsection import Subsection

class GovernmentSection(GoaLegislative):
    def __init__(self):
        super().__init__("Government")
        self._subsections = [
            Subsection("Governor : Shri. P. S. Sreedharan Pillai"),
            Subsection("Chief Minister : Shri. Pramod Sawant")
        ]

    def get_subsections(self) -> List[Subsection]:
        return self._subsections
