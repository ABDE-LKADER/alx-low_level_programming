#!/usr/bin/python3

def island_perimeter(grid):
    """Calculate the perimeter of the island described in the grid"""
    perimeter = 0

    if not grid:
        return perimeter

    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

    return perimeter
