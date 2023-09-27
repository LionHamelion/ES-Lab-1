# Function to calculate Fibonacci numbers
def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        a, b = 0, 1
        for _ in range(n - 1):
            a, b = b, a + b
        return b

# Test the function with the first 10 Fibonacci numbers
test_results = [fibonacci(i) for i in range(10)]
print(test_results)