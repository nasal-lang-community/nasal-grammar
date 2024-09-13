# nasal-grammar

An unofficial ANTLR grammar for the Nasal scripting language. Can be used as the basis for creating linters, formatters, static code analysis tools, and editor plugins for Nasal.

## Status

The ANTLR grammar is currently a work-in-progress, and is not complete or ready for use at this time. 
Please consider contributing to the development of the ANTLR grammar if you are developing Nasal tooling and could make use of this grammar.

## Usage 

Right now the ANTLR grammar isn't ready for prime-time for use in other projects, so really the only usage workflow is working on the grammar itself. 


To start, ensure you have the following packages:
```
sudo apt update
sudo apt install build-essential cmake ninja-build gcc g++ default-jre
```

You will also need ANTLR itself if you want to work on the grammar:

```
wget https://www.antlr.org/download/antlr-4.13.2-complete.jar
```

ANTLR auto-generates a C++ lexer/parser. That code is already in the repo for ease of use and inclusion into downstream Nasal tooling. But if you want to work on the grammar, you'll need to regenerate the C++ lexer/parser to reflect your contributions:

```
java -jar antlr-4.13.2-complete.jar -Dlanguage=Cpp src/Nasal.g4 
```

Then to build the auto-generated lexer/parser:

```
mkdr build && cd build
cmake .. 
make -jX # Where X is your CPU core count
```

And finally, to test out the grammar against test cases of Nasal code:

```
./build/tests/NasalParserTests
```
