#!/usr/bin/python3
"""
This script defines a function to calculate the perimeter of an island based on a given grid.
"""

def island_perimeter(grid):
    """
    Calculates and returns the perimeter of an island represented by a grid.
    
    Args:
        grid (list): A 2D list of integers where 0 represents water and 1 represents land.
        
    Returns:
        int: The perimeter of the island defined by the grid.
    """
    width = len(grid[0])
    height = len(grid)
    total_edges = 0
    total_land_cells = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                total_land_cells += 1
                if j > 0 and grid[i][j - 1] == 1:
                    total_edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    total_edges += 1
    
    return total_land_cells * 4 - total_edges * 2
