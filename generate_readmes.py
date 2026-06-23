from pathlib import Path

ROOT = Path(r"C:\LeetcodeProblems")

problem_folders = sorted([
    p for p in ROOT.iterdir()
    if p.is_dir() and not p.name.startswith(".")
])

# Root README
root_lines = [
    "# LeetCode Solutions",
    "",
    "## Profile",
    "- Username: Vishal_321",
    "- Language: C++",
    f"- Problems Solved: {len(problem_folders)}",
    "",
    "---",
    "",
    "## Problem Index",
    ""
]

for folder in problem_folders:
    root_lines.append(f"- [{folder.name}](./{folder.name})")

(ROOT / "README.md").write_text(
    "\n".join(root_lines),
    encoding="utf-8"
)

# Problem README files
for folder in problem_folders:
    cpp_files = list(folder.glob("*.cpp"))

    if not cpp_files:
        continue

    code_file = cpp_files[0]

    try:
        code = code_file.read_text(
            encoding="utf-8",
            errors="ignore"
        )
    except:
        code = "// Unable to read source file"

    readme = (
        f"# {folder.name}\n\n"
        f"## Solution\n\n"
        f"```cpp\n{code}\n```\n"
    )

    (folder / "README.md").write_text(
        readme,
        encoding="utf-8"
    )

print(f"Generated README files for {len(problem_folders)} problems.")