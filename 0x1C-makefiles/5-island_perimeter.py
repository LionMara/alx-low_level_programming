#!/usr/bin/python3

''' 5-island_perimeter.py'''


def island_perimeter(grid):
    '''A function that returns perimeter of an island'''

    edges = 0
    size = 0
    width = len(grid[0])
    height = len(grid)

    for cells in range(height):
        for cell in range(width):
            if grid[cells][cell] == 1:
                size += 1
                if (cells > 0 and grid[cells][cell - 1] == 1):
                    edges += 1
                if (cells > 0 and grid[cells - 1][cell] == 1):
                    edges += 1

    return size * 4 - edges * 2
