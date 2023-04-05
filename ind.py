import os

# 获取当前目录
path = os.getcwd()

# 打开文件
with open("file_list.html", "w") as file:
    for root, dirs, files in os.walk(path):
        for filename in files:
            file.write(f"<a href='{os.path.join(root, filename)}'>{os.path.join(root, filename)}</a><br>")
        for dirname in dirs:
            file.write(f"<b>{os.path.join(root, dirname)}</b><br>")