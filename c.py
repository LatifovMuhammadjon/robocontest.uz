# Reading n and k
n, k = map(int, input().split())

# Creating a list of tasks, each represented as a tuple (t_i, d_i)
tasks = [tuple(map(int, input().split())) for _ in range(n)]

# Sorting tasks by deadlines
tasks.sort(key=lambda x: x[1])

# Creating a list of time required for each analyst to complete a task
analysts_time = [k] * k  # Assuming each analyst can handle tasks

# Iterating through each task
for task in tasks:
    time_needed, deadline = task
    assigned = False
    
    # Trying to find an analyst to handle the task
    for i in range(k):
        if analysts_time[i] >= time_needed:  # If the analyst has enough time
            analysts_time[i] -= time_needed  # Reduce their available time
            assigned = True  # Task assigned
            break
    
    # If no analyst found for the task, print NO and exit
    if not assigned:
        print("NO")
        exit()

# If all tasks are assigned, print YES
print("YES")
