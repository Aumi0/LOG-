import os
import shutil
import random

# put the folder you want to play( dont put folder while eating gamja 🚭
folder_path = "/path/to/folder"

# here is the bullets 
random_number = random.randint(0, 5)

# if the bullet works
if random_number == 1:
    try:
        shutil.rmtree(folder_path)
        print("Folder deleted successfully.")
    except OSError as e:
        print(f"Error deleting folder: {e}")
else:
    print("Deletion unsuccessful - random number was not 1.")
