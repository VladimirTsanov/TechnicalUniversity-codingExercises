import random
numbers = [random.randint(0, 100) for _ in range(10)]
print("Original list:", numbers)
i = 0
while i < len(numbers) - 1:
    sum_neighbors = numbers[i] + numbers[i + 1]
    numbers.insert(i + 1, sum_neighbors)
    i += 2

print("Modified list:", numbers)
