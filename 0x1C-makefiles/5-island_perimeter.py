#!/usr/bin/python3

''' 5-island_perimeter.py'''
def island_perimeter(grid):
    '''A function that returns perimeter of an island'''

    j = 0
    for cells in grid:
        for cell in cells:
            if cell:
                j+=1

    perimeter = 4*j - (2*j - 2)

    return perimeter
