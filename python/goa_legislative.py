# Author : Mustafa Mulla
# Roll No : 27
from abc import ABC, abstractmethod
from typing import List

class GoaLegislative(ABC):
    def __init__(self, section_name: str):
        self._section_name = section_name

    def get_section_name(self) -> str:
        return self._section_name

    @abstractmethod
    def get_subsections(self) -> List['Subsection']:
        pass
