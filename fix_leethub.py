from pathlib import Path

ROOT = Path(r"C:\LeetcodeProblems")

for folder in ROOT.iterdir():

    if not folder.is_dir():
        continue

    md_files = [
        f for f in folder.glob("*.md")
        if f.name.lower() != "readme.md"
    ]

    if not md_files:
        continue

    source_md = md_files[0]
    readme = folder / "README.md"

    # Remove old generated README
    if readme.exists():
        readme.unlink()

    # Rename exported markdown to README.md
    source_md.rename(readme)

    print(f"Fixed: {folder.name}")

print("Done!")