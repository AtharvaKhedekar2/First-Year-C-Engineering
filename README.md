# 🚀 AI-DS-C-Foundation

Welcome to my C Programming repository! This collection contains my coursework, lab assignments, and practice programs developed during my first year of engineering.

## 📖 About This Repository
This repository is designed to be more than just a code dump; it is a step-by-step documentation of my C programming learning journey in Artificial Intelligence and Data Science at Terna Engineering College. The focus here is on deep conceptual understanding, algorithmic thinking, and clean logic rather than rote memorization. 

Each topic includes well-commented code, real-world examples where applicable, and concise notes on how the logic flows.✨


## 📁 Repository Structure
```
.
├── programs/                  # C programs, grouped by syllabus module
│   └── 01-fundamentals/       # Input/output, variables, arithmetic
├── assignments/               # Assignment question papers
├── exam-prep/
│   └── iat-1/                 # IAT-1 question bank
│       └── answers/           # Module-wise solutions (Modules 1–3)
├── Makefile                   # Builds every program in one command
└── README.md
```

## 🛠️ How to Compile and Run
**All programs at once** (needs `make` and `gcc`):
```bash
make                                      # builds everything into build/
./build/01-fundamentals/area_of_circle    # run one
make clean                                # delete the compiled files
```

**A single program** (just `gcc`):
```bash
gcc programs/01-fundamentals/area_of_circle.c -o area_of_circle
./area_of_circle
```

## ➕ Adding New Programs
- Put the file in the folder for its module, creating the folder if it's new (for example `programs/02-control-flow/`).
- Name files in lowercase with underscores: `reverse_digits.c`.
- `make` picks up new files automatically, and compiled files are ignored by Git.
