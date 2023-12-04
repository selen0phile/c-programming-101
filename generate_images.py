import glob
import os

def get_all_files(folder_path):
    pattern = f"./**/*.c"
    all_files = glob.glob(pattern, recursive=True)

    # Convert relative paths to absolute paths
    all_files = [os.path.abspath(file) for file in all_files]

    return all_files

# Specify the folder path
folder_path = './'

# Get all files in the folder and subfolders with absolute paths
files = get_all_files(folder_path)

# Print the list of absolute paths
for file in files:
    if os.path.exists(file + '.png') == False:
        os.system('python ../x45/carbon.py --code "' + file + '"')
