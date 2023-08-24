#!/usr/bin/python3


def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in grid.
    
    Args:
    grid (list of list of integers): The grid describing the island.

    Returns: 
    int: The perimeter of the island.
    """

    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                perimeter += 4
                
                #check if it is left neighbour
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2

                #check if uupper neighbour
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2
    
    return perimeter

