if __name__ == '__main__':
    # Step 1: Storage (List of Lists)
    students = []
    
    for _ in range(int(input())):
        name = input()
        score = float(input())
        # Har student ko ek sub-list bana kar append karo
        students.append([name, score])
    
    # Step 2: Find Second Lowest Score
    # List comprehension se sirf scores nikale
    all_scores = [student[1] for student in students]
    
    # Set banaya (duplicates hatane ke liye) aur sort kiya
    unique_scores = sorted(list(set(all_scores)))
    
    # Second lowest uthaya (Index 1)
    second_lowest_score = unique_scores[1]
    
    # Step 3: Find Names with that Score
    names_to_print = []
    for student in students:
        # student[0] is Name, student[1] is Score
        if student[1] == second_lowest_score:
            names_to_print.append(student[0])
            
    # Step 4: Sort Names Alphabetically (A-Z)
    names_to_print.sort()
    
    # Print one by one
    for name in names_to_print:
        print(name)

