# PART 1 : Introduction

<h2>A tour of C++: The Basics</h2>
The minimal C++ program function is called main. The program starts
by executing that function. The int value returned by main()
<h4>Types, Variables, and Arithmetics</h4>
Every name and every expression has a type that determines the operations that may be performed
on it. C++ offers a variety of fundamental types. For example:
<ul>
<li>bool // Boolean, possible values are true and false</li>
<li>char // character, for example, 'a', ' z', and '9'</li>
<li>int // integer, for example, 1, 42, and 1066</li>
<li>double // double-precision floating-point number, for example, 3.14 and 299793.0</li>
</ul>
When defining a variable, you don’t actually need to state its type explicitly when it can be
deduced from the initializer:
<ul>
<li>auto b = true // a bool</li>
<li>auto ch = 'x'; // a char</li>
<li>auto i = 123; // a int</li>
<li>auto d = 1.2; // a double</li>
<li>auto z = sqrt(y); // z has the type of whatever sqr t(y) returns </li>
</ul>
