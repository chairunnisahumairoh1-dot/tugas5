name: Build Tugas 5

on:
  push:
    branches:
      - main
  workflow_dispatch:

jobs:
  build:
    runs-on: windows-latest

    steps:
      - name: Checkout repository
        uses: actions/checkout@v4

      - name: Compile C++
        shell: bash
        run: g++ tugas_5.cpp -o tugas_5.exe -static

      - name: Upload EXE
        uses: actions/upload-artifact@v4
        with:
          name: tugas_5-exe
          path: tugas_5.exe
