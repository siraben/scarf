# scarf :
Print a text scarf in various programming languages

## dependencies :
* Node.js LTS
* Python 3
* Clang-7
* Clang++-7
* OpenJDK & JRE
* Ruby
* mono C# compiler
* unix-like Terminal Access (Linux, BSD, MacOS)

## running/compiling :
### C : main.c :
* `clang-7 -pthread -lm -o main main.c && ./main`

### C++ : main.cpp :
*  `clang++-7 -pthread -std=c++17 -o main main.cpp && ./main`

### C# : main.cs :
* `mcs -out:main.exe main.cs && mono main.exe`

### Python 3 : main.py :
* `python3 main.py`

### Node.js LTS : main.js :
* `node main.js`

### Java : Main.java :
* `javac Main.java && java Main`

### Ruby : main.rb :
*  `ruby main.rb`

### Golang : main.go :
* `go run main.go`

# note :
main.pseudo isn't a real programming language, it's just the pseudocode equivalent of the Python 3 script.
