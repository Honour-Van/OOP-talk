#!/usr/bin/env python3

import subprocess
import os
import argparse


def run_cpp(file_path):
    executable = "a.out"
    # Compile the C++ file
    compile_command = f"g++ {file_path} -o {executable}"
    subprocess.run(compile_command, shell=True, check=True)
    # Run the compiled executable
    result = subprocess.run(
        f"./{executable}", shell=True, capture_output=True, text=True
    )
    os.remove(executable)
    return result.stdout


def run_python(file_path):
    # Run the Python file
    result = subprocess.run(
        f"python3 {file_path}", shell=True, capture_output=True, text=True
    )
    return result.stdout


def run_go(file_path):
    # Run the Go file
    result = subprocess.run(
        f"go run {file_path}", shell=True, capture_output=True, text=True
    )
    return result.stdout


def run_code(file_path):
    _, extension = os.path.splitext(file_path)
    if extension == ".cpp" or extension == ".cc":
        return run_cpp(file_path)
    elif extension == ".py":
        return run_python(file_path)
    elif extension == ".go":
        return run_go(file_path)
    else:
        raise ValueError("Unsupported file extension")


def main():
    parser = argparse.ArgumentParser(
        description="Run code files written in C++, Python, or Go."
    )
    parser.add_argument("files", metavar="F", type=str, nargs="+", help="Files to run")
    args = parser.parse_args()

    for file in args.files:
        print(f"Running {file}...")
        try:
            output = run_code(file)
            print(f"Output:\n{output}")
        except Exception as e:
            print(f"Failed to run {file}: {e}")


if __name__ == "__main__":
    main()
