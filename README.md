# Visual Studio Code C/C++ Development Environment Setup

This example provides a guide for setting up a C/C++ development environment using Visual Studio Code, which can be executed on Windows, macOS, and Linux. For detailed instructions, please refer to [this article](https://blog.dinosauria.xyz/blog/write-cpp-with-vscode-2024/).

## Environment Setup

### Windows

First, use `winget` to install `Visual Studio Code` and `Chocolatey`, then use `Chocolatey` to install `mingw`.

```shell
winget install --id=Microsoft.VisualStudioCode  -e
winget install --id=Chocolatey.Chocolatey  -e
```

```shell
choco install -y mingw
```

### macOS

Use `brew` to install `Visual Studio Code` and install `clang` & `lldb` via `xcode-select`.

```shell
brew install --cask visual-studio-code
```

```shell
xcode-select --install
```

Verify the installation of `clang` and `lldb`.

```shell
clang --version
lldb --version
```

### Linux

Use `apt` to install `gcc`, `g++`, and `gdb`.

```shell
sudo apt update
sudo apt install -y build-essential
sudo apt install -y gdb
```

## Compile, Run, and Debug

After cloning the repository, use `Visual Studio Code` to open the folder. Open `main.cpp`, press `F5`, and you can start compiling and running the program.

```shell
git clone https://github.com/leoli0605/vscode.cpp
```
