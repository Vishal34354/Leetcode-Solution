from pathlib import Path

ROOT = Path(r"C:\LeetcodeProblems")

for folder in ROOT.iterdir():
    if not folder.is_dir():
        continue

    cpp_files = list(folder.glob("*.cpp"))

    if not cpp_files:
        continue

    old_file = cpp_files[0]
    new_file = folder / f"{folder.name}.cpp"

    if old_file.name != new_file.name:
        old_file.rename(new_file)
        print(f"Renamed: {old_file.name} -> {new_file.name}")

print("Done.")