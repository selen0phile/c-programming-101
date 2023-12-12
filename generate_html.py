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
files.sort(key=os.path.getmtime,reverse=True)

html = open('index.html','w')
html.write('<link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@3.3.7/dist/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous"><body style="background-color:black !important;">\n<center>\n')
for file in files:
    folder = file.split("\\")[1]
    name = file.split("\\")[2].replace(".png","")
    c = file.replace(".png","")
    html.write(f'<h3 style="color:white;font-family:consolas">{folder} / {name}</h3><a style="text-decoration:none;" href="{c}"><button class="btn btn-danger">Download</button></a><br/><br/><img src="{file}" width="400px"/><br/><br/>\n')

html.write("</center>\n</body>\n")
html.close()