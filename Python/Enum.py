# coding: utf-8

from enum import Enum

class Country(Enum):
    JAPAN = 0
    AMERICA = 1
    GERMANY = 2

print(Country.AMERICA)
print(Country.AMERICA.value)