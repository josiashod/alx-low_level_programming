#!/usr/bin/python3
"""
Island Perimeter
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid

    Parameters:
        grid (list): list of list of integers

    Description:
        - 0 represents a water zone
        - 1 represents a land zone
        - One cell is a square with side length 1
        - Grid cells are connected horizontally/vertically (not diagonally)
        - Grid is rectangular, width and height don’t exceed 100
    """

    landzonde = 0
    height = len(grid)
    width = len(grid[0])
    edges = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                landzonde += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (landzonde * 4) - (edges * 2)
