#!/bin/bash

# Task 1: Print the current date and time
echo "Current date and time:"
date

# Task 2: List all files in the current directory
echo "List of files in the current directory:"
ls

# Task 3: Check if a file exists and print a message
file="example.txt"
if [ -f "$file" ]; then
    echo "$file exists!"
else
    echo "$file does not exist."
fi

# Task 4: Create a new directory
new_dir="new_directory"
mkdir "$new_dir"
echo "Created a new directory: $new_dir"

# Task 5: Remove the directory created earlier
rmdir "$new_dir"
echo "Removed the directory: $new_dir"

# Task 6: Print the system information
echo "System information:"
uname -a

# Task 7: Display the available disk space
echo "Disk space:"
df -h

# Task 8: Print the IP address
echo "IP address:"
hostname -I

# Task 9: Display the process information
echo "Process information:"
ps aux

# Task 10: Print a farewell message
echo "Script execution completed. Goodbye!"

# End of the script
