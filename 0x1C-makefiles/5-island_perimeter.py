#!/usr/bin/python3
"""function to know area of island"""


def island_perimeter(grid):
    """function to know area of island"""
    res = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            minus = 0
            if grid[i][j] == 1:
                if grid[i-1][j] == 1:
                    minus += 1
                if grid[i+1][j] == 1:
                    minus += 1
                if grid[i][j-1] == 1:
                    minus += 1
                if grid[i][j+1] == 1:
                    minus += 1
                res += 4 - minus
                if grid[i][j+1] == 0 and grid[i+1][j] == 0:
                    break
            else:
                continue
    return res
