import os
import shutil
import random

# define the path of the folder to be deleted
folder_path = "/path/to/folder"

# randomly select a number from 0 to 5 (inclusive)
random_number = random.randint(0, 5)

# if the random number is 1, delete the folder using shutil.rmtree()
if random_number == 1:
    try:
        shutil.rmtree(folder_path)
        print("Folder deleted successfully.")
    except OSError as e:
        print(f"Error deleting folder: {e}")
else:
    print("Deletion unsuccessful - random number was not 1.")
