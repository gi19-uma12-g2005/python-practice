import copy

original = [1, [10, 20], 3]

duplicate = copy.deepcopy(original)

print("Modifying the inner list inside 'original'...")
original[1][0] = 999

print("Original: ", original)
print("Duplicate:", duplicate)

print(id(original))
print(id(duplicate))