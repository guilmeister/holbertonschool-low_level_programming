#!/usr/bin/python3
"""
Module to find perimeter
"""

def island_perimeter(grid):
    """
    Function to get the perimeter of an island
    """
    perimeter = 0
    if grid is None:
        return perimeter
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                directions = [ [0, 1], [1, 0], [0, -1], [-1, 0] ]
                for z in range(len(directions)):
                    iterx = x + directions[z][0]
                    itery = y + directions[z][1]
                    if (0 <= iterx < len(grid) and
                        0 <= itery < len(grid[x]) and
                        grid[iterx][itery] == 0):
                        perimeter = perimeter + 1
                    elif (iterx == -1 or iter == len(grid)
                          or itery == -1 or itery == len(grid[x])):
                        perimeter = perimeter + 1
    return perimeter
