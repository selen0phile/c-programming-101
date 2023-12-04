import glob
import os

def get_all_files(folder_path):
    pattern = f"./**/*.png"
    all_files = glob.glob(pattern, recursive=True)
    return all_files

# Specify the folder path
folder_path = './'

# Get all files in the folder and subfolders with absolute paths
files = get_all_files(folder_path)

html = open('index.html','w')
html.write('<body bgcolor="black">\n<center>\n')
for file in files:
    folder = file.split("\\")[1]
    name = file.split("\\")[2].replace(".png","")
    html.write(f'<h3 style="color:white;font-family:consolas">{folder} / {name}</h3><img src="{file}" width="400px"/><br/><br/>\n')

html.write("</center>\n</body>\n")
html.close()