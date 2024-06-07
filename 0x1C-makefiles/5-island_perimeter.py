#!/usr/bin/python3
""" Provides a function to calculate the perimeter of an island
represented in a 2D grid. """


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the given grid.

    Parameters:
    grid (list of list of int): A 2D grid where 0 represents water \
    and 1 represents land.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # Land cell
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
