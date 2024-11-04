

try:
    invalid = False
    while True:
        line = input()
        print(line)
        
        if line.startswith("Lines executed:") and not line.startswith("Lines executed:100.00%"):
            invalid = True
    
except EOFError:
    if invalid: raise Exception("COVERAGE ERROR")
