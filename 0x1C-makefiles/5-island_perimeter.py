#!/usr/bin/python3
'''task 5 module island_perimeter'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    island_total = 0
    last_fc = []
    current_fc = []
    for index, list in enumerate(grid):
        for idx, cell in enumerate(list):
            if cell == 1:
                current_fc.append(idx)
                # right and left sides
                if idx == 0 or list[idx - 1] == 0:
                    island_total += 1  # add left side of the cell
                if idx == len(list) - 1 or list[idx + 1] == 0:
                    island_total += 1  # add  right side of the cell
                # top sides
                if idx not in last_fc:
                    island_total += 1  # add the top side
                # bottom sides
                if index + 1 < len(grid):
                    if grid[index + 1][idx] != 1:
                        island_total += 1  # add bottom side of the cell
                else:
                    island_total += 1
        last_fc = current_fc.copy()
        current_fc = []

    return island_total
